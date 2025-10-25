#include "pch.h"
#include "MMXboxDeviceEnumeratorWrapper.h"
#include "MMDeviceEnumeratorWrapper.h"
#include <audioclient.h>
#include "MMDeviceWrapper.h"
#include "MMDeviceCollectionWrapper.h"

#include <DbgHelp.h>
#pragma comment(lib, "DbgHelp.lib")
void DumpStackTrace() {
    void* stack[32];
    USHORT frames = CaptureStackBackTrace(0, 128, stack, NULL);
    HANDLE process = GetCurrentProcess();

    SymInitialize(process, NULL, TRUE);

    for (USHORT i = 0; i < frames; ++i) {
        DWORD64 addr = (DWORD64)(stack[i]);
        char buffer[sizeof(SYMBOL_INFO) + MAX_SYM_NAME];
        PSYMBOL_INFO symbol = (PSYMBOL_INFO)buffer;
        symbol->SizeOfStruct = sizeof(SYMBOL_INFO);
        symbol->MaxNameLen = MAX_SYM_NAME;

        DWORD64 displacement;
        if (SymFromAddr(process, addr, &displacement, symbol)) {
            printf("[STACK %02d] %s (0x%llx)\n", i, symbol->Name, symbol->Address);
        }
        else {
            printf("[STACK %02d] Unknown Addr (0x%llx)\n", i, addr);
        }
    }
}

MMDeviceEnumeratorWrapper::MMDeviceEnumeratorWrapper(IMMDeviceEnumerator* realEnumerator)
    : m_realEnumerator(realEnumerator)
{
    if (m_realEnumerator)
        m_realEnumerator->AddRef();
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::QueryInterface(REFIID riid, void** ppvObject)
{
    LPOLESTR str = nullptr;
    StringFromIID(riid, &str);
    wprintf(L"[QueryInterface] IID requested: %ls\n", str);
    CoTaskMemFree(str);
    //DumpStackTrace();
    printf("[MMDeviceEnumeratorWrapper] QueryInterface called\n");
	if (riid == __uuidof(IMMXboxDeviceEnumerator))
	{
        printf("[MMDeviceEnumeratorWrapper] QueryInterface called and is an Xbox Device Enum\n");
		*ppvObject = new MMXboxDeviceEnumerator(this);
		this->AddRef();
		return S_OK;
	}

	return m_realEnumerator->QueryInterface(riid, ppvObject);
}

ULONG __stdcall MMDeviceEnumeratorWrapper::AddRef(void)
{
    printf("[MMDeviceEnumeratorWrapper] AddRef called\n");
    return InterlockedIncrement(&m_refCount);
}

ULONG __stdcall MMDeviceEnumeratorWrapper::Release(void)
{
    printf("[MMDeviceEnumeratorWrapper] Release called\n");
    ULONG count = InterlockedDecrement(&m_refCount); 
    if (count == 0)
    {
        if (m_realEnumerator)
            m_realEnumerator->Release();
        delete this;
    }
    return count;
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::EnumAudioEndpoints(EDataFlow dataFlow, DWORD dwStateMask, IMMDeviceCollection** ppDevices)
{
    // Sanity check inputs
    if (!ppDevices)
        return E_POINTER;

    printf("[MMDeviceEnumeratorWrapper] EnumAudioEndpoints called with dataFlow=%d, dwStateMask=0x%08lX\n", dataFlow, static_cast<unsigned long>(dwStateMask));
    DWORD validMask = DEVICE_STATE_ACTIVE | DEVICE_STATE_DISABLED | DEVICE_STATE_NOTPRESENT | DEVICE_STATE_UNPLUGGED;
    dwStateMask = dwStateMask & validMask;
    if (dwStateMask == 0)
        dwStateMask = 0x0000000F;
    IMMDeviceCollection* realCollection = nullptr;
    HRESULT hr = m_realEnumerator->EnumAudioEndpoints(dataFlow, dwStateMask, &realCollection);
    printf("[MMDeviceEnumeratorWrapper] EnumAudioEndpoints HRESULT: 0x%08X, realCollection: %p\n", hr, realCollection);

    if (FAILED(hr) || !realCollection)
    {
        *ppDevices = nullptr;
        return hr;
    }
    MMDeviceCollectionWrapper* wrapper = new MMDeviceCollectionWrapper(realCollection);
    *ppDevices = wrapper;
    return hr;
}


HRESULT __stdcall MMDeviceEnumeratorWrapper::GetDefaultAudioEndpoint(EDataFlow dataFlow, ERole role, IMMDevice** ppEndpoint)
{
    printf("[MMDeviceEnumeratorWrapper] GetDefaultAudioEndpoint called with dataFlow=%d, role=%d\n", dataFlow, role);
    IMMDevice* realDevice = nullptr;
    HRESULT hr = m_realEnumerator->GetDefaultAudioEndpoint(dataFlow, role, &realDevice);
    printf("[Wrapper] GetDefaultAudioEndpoint HRESULT: 0x%08X, realDevice: %p, ppEndpoint: %p\n", hr, realDevice, ppEndpoint);

    if (SUCCEEDED(hr) && realDevice && ppEndpoint)
    {
        printf("SUCCESS: Creating MMDeviceWrapper\n");
        *ppEndpoint = new MMDeviceWrapper(realDevice);
    }
    else
    {
        printf("FAILED: hr=0x%08X, realDevice=%p, ppEndpoint=%p\n", hr, realDevice, ppEndpoint);
        if (ppEndpoint) *ppEndpoint = nullptr;
    }

    return hr;
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::GetDevice(LPCWSTR pwstrId, IMMDevice** ppDevice)
{
    printf("[MMDeviceEnumeratorWrapper] GetDevice called\n");

    IMMDevice* realDevice = nullptr;
    HRESULT hr = m_realEnumerator->GetDevice(pwstrId, &realDevice);

    if (SUCCEEDED(hr) && realDevice)
    {
        *ppDevice = new MMDeviceWrapper(realDevice);
    }
    else
    {
        *ppDevice = nullptr;
    }

    return hr;
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::RegisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
    //DumpStackTrace();
    printf("[MMDeviceEnumeratorWrapper] RegisterEndpointNotificationCallback called\n");
	return m_realEnumerator->RegisterEndpointNotificationCallback(pClient);
}

HRESULT __stdcall MMDeviceEnumeratorWrapper::UnregisterEndpointNotificationCallback(IMMNotificationClient* pClient)
{
    //DumpStackTrace();
    printf("[MMDeviceEnumeratorWrapper] UnregisterEndpointNotificationCallback called\n");
	return m_realEnumerator->UnregisterEndpointNotificationCallback(pClient);
}