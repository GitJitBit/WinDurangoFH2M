#include "pch.h"
#include "../common/common.h"

uint32_t dword_180021AA0[16];
uint32_t dword_180021A60[16];
int64_t qword_18002C7E0[34];
HANDLE HeapHandle;
// Global function pointers for memory allocation and deallocation
PVOID(__fastcall* XmpAllocRoutine)(SIZE_T, uint64_t) = nullptr;
BOOLEAN(__stdcall* XmpFreeRoutine)(PVOID, uint64_t) = nullptr;
// Define the global critical section lock
XmpAllocationHookLock_t XmpAllocationHookLock = {
    &XmpAllocationHookLock_DEBUG, // Pointer to debug info
    -1,                           // LockCount (unowned)
    0,                            // RecursionCount
    0,                            // OwningThread
    0,                            // LockSemaphore
    0x4000000                     // SpinCount (high-performance)
};

// Define the debug info structure (can be initialized later if needed)
RTL_CRITICAL_SECTION_DEBUG XmpAllocationHookLock_DEBUG = { 0 };


// Define the global variables here (only once)
void* XmpHeaps[32] = { 0 };

int XmpHeapPageTypes[16] = {
    PAGE_READWRITE,         // 0 - Standard heap memory
    PAGE_READWRITE,         // 1 - General memory use
    PAGE_READWRITE,         // 2 - Shared memory
    0,                      // 3 - Unused/invalid
    PAGE_READWRITE,         // 4 - Standard heap allocation
    PAGE_READWRITE,         // 5 - Memory-mapped I/O
    PAGE_READWRITE,         // 6 - Stack allocation
    0,                      // 7 - Unused/invalid
    PAGE_READWRITE,         // 8 - System memory allocation
    0,                      // 9 - Unused
    PAGE_EXECUTE_READ,      // 10 - Executable code memory
    0,                      // 11 - Unused
    PAGE_READWRITE,         // 12 - Shared heap
    0,                      // 13 - Unused
    PAGE_READWRITE,         // 14 - Custom memory pool
    0                       // 15 - Reserved
};

const int XmpHeapAllocationTypes[16] = {
    MEM_COMMIT | MEM_RESERVE,   // 0: Standard committed memory
    MEM_LARGE_PAGES,            // 1: Large page allocation (if supported)
    MEM_COMMIT,                 // 2: Committed memory only
    MEM_RESERVE,                // 3: Reserved memory (uncommitted)
    MEM_TOP_DOWN,               // 4: Allocate from highest address
    MEM_WRITE_WATCH,            // 5: Write-watched memory pages
    MEM_COMMIT | MEM_TOP_DOWN,  // 6: Committed with top-down allocation
    MEM_RESERVE | MEM_TOP_DOWN, // 7: Reserved with top-down allocation
    MEM_PHYSICAL,               // 8: Physical memory mapping
    MEM_RESET,                  // 9: Reset memory (discards data)
    MEM_RESET_UNDO,             // 10: Undo memory reset
    MEM_LARGE_PAGES | MEM_COMMIT, // 11: Large Pages with Commit
    MEM_MAPPED,                 // 12: Mapped memory
    MEM_PRIVATE,                // 13: Private memory allocation
    MEM_COMMIT | MEM_LARGE_PAGES, // 14: Large Pages with Commit (alt)
    MEM_COMMIT | MEM_RESERVE | MEM_TOP_DOWN // 15: Fully committed, reserved, top-down
};
//Ignoring this as for now (just hope it's not being used and it's not useful.)
__int64 NlsUpdateLocale_X() {
    return 0();
}

void WakeByAddressSingle_X(PVOID Address) {
    WakeByAddressSingle(Address);
}

void WakeByAddressAll_X(PVOID Address) {
    WakeByAddressAll(Address);
}

BOOL __stdcall WaitOnAddress_X(volatile void* Address, PVOID CompareAddress, SIZE_T AddressSize, DWORD dwMilliseconds)
{
    return WaitOnAddress(Address, CompareAddress, AddressSize, dwMilliseconds);
}
BOOL JobTitleMemoryStatus_X(void* pJob, LPTITLEMEMORYSTATUS Buffer) {
    __int64 jobInfo[7]; // Buffer to store job object memory information
    NTSTATUS status;
    // Validate input parameters
    if (!pJob || !Buffer || Buffer->dwLength != sizeof(TITLEMEMORYSTATUS)) {
        SetLastError(ERROR_INVALID_PARAMETER);
        return FALSE;
    }

    // Query job memory information
    status = QueryInformationJobObject(pJob, (JOBOBJECTINFOCLASS)(JobObjectGroupInformation | 0x10), jobInfo, JOB_INFO_SIZE, NULL);
    if (status < 0) {
        RtlSetLastWin32ErrorAndNtStatusFromNtStatus(status);
        return FALSE;
    }

    // Extract job memory stats
    DWORDLONG totalMem = jobInfo[0];
    DWORDLONG usedMem = jobInfo[1];
    DWORDLONG peakLegacy = jobInfo[2];
    DWORDLONG totalLegacy = jobInfo[3];
    DWORDLONG limitLegacy = jobInfo[4];
    DWORDLONG currentTitle = jobInfo[5];
    DWORDLONG peakTitle = jobInfo[6];

    // Populate TITLEMEMORYSTATUS structure
    Buffer->ullTotalMem = totalMem;
    Buffer->ullAvailMem = totalMem - usedMem;
    Buffer->ullLegacyUsed = peakLegacy;
    Buffer->ullLegacyPeak = totalLegacy;
    Buffer->ullLegacyAvail = limitLegacy - peakLegacy;
    Buffer->ullTitleUsed = currentTitle;
    Buffer->ullTitleAvail = peakTitle - currentTitle;

    return TRUE; // Success
}
// We ignore setting this as we actually don't care about this.
bool SetThreadpoolAffinityMask_X()
{
    return true;
}

BOOL SetThreadName_X(HANDLE hThread, const WCHAR* lpThreadName)
{
    UNICODE_STRING DestinationString;

    RtlInitUnicodeString(&DestinationString, lpThreadName);
    NTSTATUS Status = NtSetInformationThread(hThread, ThreadNameInformation, &DestinationString, 0x10u);
    if (NT_SUCCESS(Status))
        return TRUE;
    return FALSE;
}

void QueryProcessorSchedulingStatistics_X(PPROCESSOR_SCHEDULING_STATISTICS ProcessorSchedulingStatistics)
{
    LARGE_INTEGER frequency = { 0 };
    LARGE_INTEGER counter = { 0 };

    // Query the performance frequency and counter
    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&counter);

    // Set a1[2] based on the performance counter and frequency
    ProcessorSchedulingStatistics->GlobalTime = counter.QuadPart / (frequency.QuadPart / 10000000);

    // Use the CPUID instruction
    int cpuInfo[4] = { 0 }; // {EAX, EBX, ECX, EDX}
    __cpuid(cpuInfo, 0);  // This gets the highest function supported by CPUID

    // Combine RBX and RAX as a 64-bit value and store in *a1
    ProcessorSchedulingStatistics->RunningTime = __ull_rshift(cpuInfo[1], cpuInfo[0]);  // EBX (RBX), EAX (RAX)

    // Combine RDX and RCX as a 64-bit value and store in a1[1]
    ProcessorSchedulingStatistics->IdleTime = __ull_rshift(cpuInfo[3], cpuInfo[2]); // EDX (RDX), ECX (RCX)
}


BOOL GetThreadName_X(HANDLE hThread, PWSTR lpThreadName, SIZE_T nBufferLength, SIZE_T* pnRequiredLength)
{
    ULONG v11; // ebx
    NTSTATUS iError; // edi
    ULONG ReturnLength; // [rsp+78h] [rbp+20h] BYREF

    if (!pnRequiredLength)
    {
        SetLastError(STATUS_INVALID_PARAMETER);
        return FALSE;
    }

    PUNICODE_STRING lpData = NULL;
    v11 = 144;
    SIZE_T iNameSize = 0;
    while (TRUE)
    {
        if (lpData)
            HeapFree(GetProcessHeap(), 0, lpData);
        lpData = (PUNICODE_STRING)HeapAlloc(GetProcessHeap(), 0, v11);
        if (!lpData)
        {
            SetLastError(STATUS_NO_MEMORY);
            return FALSE;
        }
        iError = NtQueryInformationThread(hThread, ThreadNameInformation, lpData, v11, &ReturnLength);
        if (iError != STATUS_INFO_LENGTH_MISMATCH && iError != STATUS_BUFFER_TOO_SMALL && iError != STATUS_BUFFER_OVERFLOW)
            break;
        v11 = ReturnLength;
    }
    if (NT_SUCCESS(iError))
    {
        iNameSize = lpData->Length / 2;
        if (lpThreadName && iNameSize < nBufferLength)
        {
            memcpy(lpThreadName, lpData->Buffer, iNameSize * sizeof(WCHAR));
            lpThreadName[iNameSize] = 0;
        }
        else
        {
            ++iNameSize;
            iError = STATUS_BUFFER_TOO_SMALL;
        }
    }

    *pnRequiredLength = iNameSize;
    HeapFree(GetProcessHeap(), 0, lpData);
    if (!NT_SUCCESS(iError))
    {
        SetLastError(iError);
        return FALSE;
    }
    return TRUE;
}

void GetSystemOSVersion_X(LPSYSTEMOSVERSIONINFO VersionInformation) {
    if (!VersionInformation)
    {
        return;
    }

    int cpuInfo[4] = { -1 };

    // @Patoke note: the XBOX passes 0x4000000D for its default hypervisor, we're not running a hypervisor
    // Execute CPUID with EAX = 1
    __cpuid(cpuInfo, 1);

    int eax = cpuInfo[0];
    int ebx = cpuInfo[1];
    int edx = cpuInfo[3];

    VersionInformation->MajorVersion = LOBYTE(ebx);             // Lowest 8 bits of EBX
    VersionInformation->MinorVersion = HIBYTE(HIWORD(eax));     // Highest 8 bits of EAX

    VersionInformation->Revision = LOWORD(edx);                 // Lowest 16 bits of EDX
    VersionInformation->BuildNumber = LOWORD(eax);              // Lowest 16 bits of EAX     
}


CONSOLE_TYPE GetConsoleType_X() {
    return CONSOLE_TYPE::CONSOLE_TYPE_XBOX_ONE_X_DEVKIT;
}

PVOID XMemAllocDefault_X(SIZE_T dwSize, uint64_t flags) {
    PVOID ptr = nullptr;
    // Example flag usage: we assume if the highest bit of flags is set, we zero the memory.
    bool shouldZeroMemory = (flags & (1ULL << 63)) != 0;

    // Allocate memory
    ptr = malloc(dwSize);

    // Optionally zero out the memory if the flag is set
    if (ptr && shouldZeroMemory) {
        memset(ptr, 0, dwSize);
    }

    return ptr;
}
#define MAX_HEAPS 16

static CRITICAL_SECTION g_HeapLocks[MAX_HEAPS];
static LPVOID g_Heaps[MAX_HEAPS]; // Base addresses
static DWORD g_HeapFreePages[MAX_HEAPS];
static DWORD g_HeapTargetPages[MAX_HEAPS];
static DWORD g_HeapHysteresisPages[MAX_HEAPS];

HRESULT __stdcall XMemSetAllocationHysteresis_X(int heapId, int applyFlag, __int64 hysteresisBytes)
{
    if ((heapId & 0xFFFFFFF0) != 0)
    {
        SetLastError(ERROR_INVALID_PARAMETER);
        return E_FAIL;
    }

    if (applyFlag)
        heapId |= 0x10;

    int slot = heapId & 0xF;

    // Initialize heap lazily
    if (!g_Heaps[slot])
    {
        g_Heaps[slot] = VirtualAlloc(NULL, 64 * 1024 * 1024, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE); // 64MB heap
        if (!g_Heaps[slot])
            return E_FAIL;

        InitializeCriticalSection(&g_HeapLocks[slot]);
        g_HeapFreePages[slot] = 16; // 16 pages initially free
        g_HeapTargetPages[slot] = 16;
    }

    EnterCriticalSection(&g_HeapLocks[slot]);

    DWORD targetPages = (DWORD)((hysteresisBytes + 0x3FFFFF) >> 22); // Each page = 4MB
    g_HeapHysteresisPages[slot] = targetPages;

    while (g_HeapTargetPages[slot] > targetPages)
    {
        LPVOID addr = (LPBYTE)g_Heaps[slot] + ((g_HeapTargetPages[slot] - 1) * 4 * 1024 * 1024); // Page offset
        if (!VirtualFree(addr, 4 * 1024 * 1024, MEM_DECOMMIT))
        {
            LeaveCriticalSection(&g_HeapLocks[slot]);
            return HRESULT_FROM_WIN32(GetLastError());
        }

        g_HeapTargetPages[slot]--;
    }

    LeaveCriticalSection(&g_HeapLocks[slot]);
    SetLastError(0);
    return S_OK;
}
BOOLEAN __stdcall XMemFreeDefault_X(PVOID pAddress, uint64_t dwAllocAttributes) {
    
    free(pAddress);

    return TRUE;
}


void XMemFree_X(PVOID pADDRESS, uint64_t dwAllocAttributes) {
    XMemFreeDefault_X(pADDRESS, dwAllocAttributes);
}

// Define PVOID for non-Windows environments if needed
#ifndef _WINDEF_
typedef void* PVOID;
#endif



PVOID XMemAlloc_X(SIZE_T dwSize, uint64_t flags) {
    return XMemAllocDefault_X(dwSize, flags);
}

NTSTATUS __fastcall XMemSetAllocationHooks_X(PVOID(__fastcall* XMemAlloc)(SIZE_T, uint64_t), BOOLEAN(__stdcall* XMemFree)(PVOID, uint64_t))
{
    // Enter critical section using direct WinAPI
    EnterCriticalSection((LPCRITICAL_SECTION)&XmpAllocationHookLock);

    if (XMemAlloc)
    {
        // Set custom memory management functions
        XmpAllocRoutine = XMemAlloc;
        XmpFreeRoutine = XMemFree;
    }
    else
    {
        // Use default memory functions
        XmpAllocRoutine = XMemAllocDefault_X;
        XmpFreeRoutine = XMemFreeDefault_X;
    }

    // Leave critical section using direct WinAPI
    LeaveCriticalSection((LPCRITICAL_SECTION)&XmpAllocationHookLock);

    return STATUS_SUCCESS;
}

#define PROTECT_FLAGS_MASK (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY | PAGE_NOACCESS | PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_GUARD | PAGE_NOCACHE)
#define ALLOCATION_FLAGS_MASK (MEM_COMMIT | MEM_RESERVE | MEM_RESET | MEM_LARGE_PAGES | MEM_PHYSICAL | MEM_TOP_DOWN | MEM_WRITE_WATCH)

#define PROTECT_FLAGS_MASK 0xFF
#define ALLOCATION_FLAGS_MASK 0xFFFFF

bool EnableDebugPrivilege() {
    HANDLE hToken;
    TOKEN_PRIVILEGES tp;
    LUID luid;

    if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
        return false;
    if (!LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &luid))
        return false;

    tp.PrivilegeCount = 1;
    tp.Privileges[0].Luid = luid;
    tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    if (!AdjustTokenPrivileges(hToken, FALSE, &tp, sizeof(tp), NULL, NULL)) {
        CloseHandle(hToken);
        return false;
    }

    CloseHandle(hToken);
    return GetLastError() == ERROR_SUCCESS;
}

LPVOID VirtualAllocEx_X(HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)
{
    flProtect &= PROTECT_FLAGS_MASK;
    flAllocationType &= ALLOCATION_FLAGS_MASK;

    printf("VirtualAllocEx_X: %p, %zu, %x, %x\n", lpAddress, dwSize, flAllocationType, flProtect);

    LPVOID ret = VirtualAllocEx(hProcess, lpAddress, dwSize, flAllocationType, flProtect);
    if (!ret) {
        DWORD err = GetLastError();
        printf("VirtualAllocEx failed with error %lu\n", err);

        if (err == ERROR_PRIVILEGE_NOT_HELD) {
            printf("VirtualAllocEx failed due to missing privileges (SeDebugPrivilege).\n");
        }

        // Fallback only if allocating into self
        if (hProcess == GetCurrentProcess() || hProcess == NULL) {
            printf("Attempting fallback with VirtualAlloc...\n");

            if ((flAllocationType & (MEM_RESERVE | MEM_COMMIT)) != 0) {
                ret = VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
                if (!ret) {
                    DWORD fallbackErr = GetLastError();
                    printf("VirtualAlloc fallback also failed: %lu\n", fallbackErr);
                }
            }
        }
    }

    // Final safety: log if still null
    if (!ret) {
        printf("VirtualAllocEx_X ultimately failed to allocate %zu bytes.\n", dwSize);
    }

    return ret;
}


LPVOID VirtualAlloc_X(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD  flAllocationType,
    DWORD  flProtect
)
{
    return VirtualAllocEx_X(GetCurrentProcess(), lpAddress, dwSize, flAllocationType, flProtect);
}
#define PROTECT_FLAGS_MASK (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY | PAGE_NOACCESS | PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_GUARD | PAGE_NOCACHE)
#define ALLOCATION_FLAGS_MASK (MEM_COMMIT | MEM_RESERVE | MEM_RESET | MEM_LARGE_PAGES | MEM_PHYSICAL | MEM_TOP_DOWN | MEM_WRITE_WATCH)

#define PROTECT_FLAGS_MASK 0xFF
#define ALLOCATION_FLAGS_MASK 0xFFFFF

bool EnableDebugPrivilege() {
    HANDLE hToken;
    TOKEN_PRIVILEGES tp;
    LUID luid;

    if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken))
        return false;
    if (!LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &luid))
        return false;

    tp.PrivilegeCount = 1;
    tp.Privileges[0].Luid = luid;
    tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;

    if (!AdjustTokenPrivileges(hToken, FALSE, &tp, sizeof(tp), NULL, NULL)) {
        CloseHandle(hToken);
        return false;
    }

    CloseHandle(hToken);
    return GetLastError() == ERROR_SUCCESS;
}

LPVOID VirtualAllocEx_X(HANDLE hProcess, LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)
{
    flProtect &= PROTECT_FLAGS_MASK;
    flAllocationType &= ALLOCATION_FLAGS_MASK;

    DEBUGPRINT("VirtualAllocEx_X: %p, %zu, %x, %x\n", lpAddress, dwSize, flAllocationType, flProtect);

    LPVOID ret = VirtualAllocEx(hProcess, lpAddress, dwSize, flAllocationType, flProtect);
    if (!ret) {
        DWORD err = GetLastError();
        DEBUGPRINT("VirtualAllocEx failed with error %lu\n", err);

        if (err == ERROR_PRIVILEGE_NOT_HELD) {
            DEBUGPRINT("VirtualAllocEx failed due to missing privileges (SeDebugPrivilege).\n");
        }

        // Fallback only if allocating into self
        if (hProcess == GetCurrentProcess() || hProcess == NULL) {
            DEBUGPRINT("Attempting fallback with VirtualAlloc...\n");

            if ((flAllocationType & (MEM_RESERVE | MEM_COMMIT)) != 0) {
                ret = VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
                if (!ret) {
                    DWORD fallbackErr = GetLastError();
                    DEBUGPRINT("VirtualAlloc fallback also failed: %lu\n", fallbackErr);
                }
            }
        }
    }

    // Final safety: log if still null
    if (!ret) {
        DEBUGPRINT("VirtualAllocEx_X ultimately failed to allocate %zu bytes.\n", dwSize);
    }

    return ret;
}


LPVOID VirtualAlloc_X(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD  flAllocationType,
    DWORD  flProtect
)
{
    return VirtualAllocEx_X(GetCurrentProcess(), lpAddress, dwSize, flAllocationType, flProtect);
}

BOOL ToolingMemoryStatus_X(LPTOOLINGMEMORYSTATUS buffer)
{
    __int64 SystemInformation[4];

    if (buffer->dwLength != 40)
    {
        SetLastError(0x57u);
        return FALSE;
    }

    NTSTATUS Status = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)(0x96 | 0x80), SystemInformation, 0x20u, 0i64);
    if (!NT_SUCCESS(Status))
    {
        SetLastError(Status);
        return FALSE;
    }

    buffer->ullTotalMem = SystemInformation[0];
    buffer->ullAvailMem = SystemInformation[1];
    buffer->ulPeakUsage = SystemInformation[2];
    buffer->ullPageTableUsage = SystemInformation[3];

    return TRUE;
}

BOOL TitleMemoryStatus_X(LPTITLEMEMORYSTATUS Buffer)
{
    __int64 ProcessInformation[10]; // [rsp+30h] [rbp-68h] BYREF

    if (Buffer->dwLength != 80)
    {
        SetLastError(0x57u);
        return false;
    }

    NTSTATUS Status = NtQueryInformationProcess(
        GetCurrentProcess(),
        (PROCESSINFOCLASS)(0x3A | 0x3A),
        ProcessInformation,
        0x48u,
        0i64);

    if (!NT_SUCCESS(Status))
    {
        SetLastError(Status);
        return FALSE;
    }

    Buffer->ullTotalMem = ProcessInformation[0];
    Buffer->ullAvailMem = ProcessInformation[0] - ProcessInformation[1];

    Buffer->ullLegacyUsed = ProcessInformation[2];
    Buffer->ullAvailMem = ProcessInformation[4] - ProcessInformation[2];

    Buffer->ullTitleUsed = ProcessInformation[5];
    Buffer->ullTitleUsed = ProcessInformation[5] - ProcessInformation[6];

    //// @Patoke todo: what is this doing? it's writing outside the bounds of TITLEMEMORYSTATUS
    //*(DWORD*)((uint8_t*)Buffer + 64) = ProcessInformation[7];
    //*(DWORD*)((uint8_t*)Buffer + 72) = ProcessInformation[8];

    // equivalent to the previous code
    auto* nextBuffer = Buffer++;
    nextBuffer->dwLength = ProcessInformation[7];
    nextBuffer->dwReserved = ProcessInformation[8];

    return TRUE;
}
