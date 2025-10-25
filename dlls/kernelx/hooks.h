#pragma once
#include <winrt/Windows.ApplicationModel.h>

#include "utils.h"
#include "CoreApplicationWrapperX.h"
#include <windows.applicationmodel.core.h>

#include "CurrentAppWrapper.hpp"
#include "MMDeviceEnumeratorWrapper.h"
#include <winrt/windows.storage.provider.h>
#include <atlbase.h>
#include "NetworkInformationWrapperX.h"

#define RETURN_HR(hr) return hr
#define RETURN_LAST_ERROR_IF(cond) if (cond) return HRESULT_FROM_WIN32(GetLastError())

/* This function is used to compare the class name of the classId with the classIdName. */
inline bool IsClassName(HSTRING classId, const char* classIdName)
{
	const wchar_t* classIdString = WindowsGetStringRawBuffer(classId, nullptr);
	std::wstring classIdWString(classIdString);
	const std::string classIdStringUTF8(classIdWString.begin(), classIdWString.end());

	return (classIdStringUTF8 == classIdName);
}

HMODULE GetRuntimeModule()
{
	std::array<const wchar_t*, 3> modules = { L"vccorlib140.dll", L"vccorlib110.dll", L"vccorlib120.dll" };
	static HMODULE hModule = nullptr;
	if (hModule != nullptr)
	{
		return hModule;
	}

	for (auto& module : modules)
	{
		hModule = GetModuleHandleW(module);
		if (hModule != nullptr)
		{
			break;
		}
	}

	return hModule;
}

HRESULT WINAPI GetActivationFactoryRedirect(PCWSTR str, REFIID riid, void** ppFactory);
/* Function pointers for the DllGetForCurrentThread */
typedef HRESULT(*DllGetForCurrentThreadFunc) (ICoreWindowStatic*, CoreWindow**);
/* Function pointers for the DllGetForCurrentThread */
DllGetForCurrentThreadFunc pDllGetForCurrentThread = nullptr;
/* Function pointers for the DllGetForCurrentThread */
HRESULT(STDMETHODCALLTYPE* TrueGetForCurrentThread)(ICoreWindowStatic* staticWindow, CoreWindow** window);
/* Function pointers for the DllGetActivationFactory */
typedef HRESULT(*DllGetActivationFactoryFunc) (HSTRING, IActivationFactory**);
/* Function pointers for the DllGetActivationFactory */
DllGetActivationFactoryFunc pDllGetActivationFactory = nullptr;
DllGetActivationFactoryFunc pMediaDllGetActivationFactory = nullptr;
/* Function pointers for the WinRT RoGetActivationFactory function. */
HRESULT(WINAPI* TrueRoGetActivationFactory)(HSTRING classId, REFIID iid, void** factory) = RoGetActivationFactory;

HRESULT(WINAPI* TrueActivateInstance)(IActivationFactory* thisptr, IInspectable** instance) = nullptr;


/* Function pointers for filesystem APIs */
HFILE(WINAPI* TrueOpenFile)(LPCSTR lpFileName, LPOFSTRUCT lpReOpenBuff, UINT uStyle) = OpenFile;
HANDLE(WINAPI* TrueCreateFileW)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile) = CreateFileW;

HANDLE(WINAPI* TrueCreateFile2)(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode,
DWORD dwCreationDisposition, LPCREATEFILE2_EXTENDED_PARAMETERS pCreateExParams) = CreateFile2;

BOOL(WINAPI* TrueCreateDirectoryA)(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes) = CreateDirectoryA;

DWORD(WINAPI* TrueGetFileAttributesW)(LPCWSTR lpFileName) = GetFileAttributesW;
BOOL(WINAPI* TrueGetFileAttributesExW)(LPCWSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation) = GetFileAttributesExW;

HANDLE(WINAPI* TrueFindFirstFileW)(LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData) = FindFirstFileW;

BOOL(WINAPI* TrueDeleteFileW)(LPCWSTR lpFileName) = DeleteFileW;

HMODULE(WINAPI* TrueLoadLibraryExW)(LPCWSTR lpLibFileName, HANDLE  hFile, DWORD dwFlags) = LoadLibraryExW;
HMODULE(WINAPI* TrueLoadLibraryExA)(LPCSTR lpLibFileName, HANDLE  hFile, DWORD dwFlags) = LoadLibraryExA;
HMODULE(WINAPI* TrueLoadLibraryW)(LPCWSTR lpLibFileName) = LoadLibraryW;

HRESULT(STDMETHODCALLTYPE* TrueGetLicenseInformation)(
	ABI::Windows::ApplicationModel::Store::ILicenseInformation** value
) = nullptr;

HRESULT(WINAPI* TrueCoCreateInstance)(_In_ REFCLSID rclsid,
	_In_opt_ LPUNKNOWN pUnkOuter,
	_In_ DWORD dwClsContext,
	_In_ REFIID riid,
	_COM_Outptr_ _At_(*ppv, _Post_readable_size_(_Inexpressible_(varies))) LPVOID  FAR* ppv) = CoCreateInstance;

HRESULT __stdcall CoCreateInstance_hook(
	_In_ REFCLSID rclsid,
	_In_opt_ LPUNKNOWN pUnkOuter,
	_In_ DWORD dwClsContext,
	_In_ REFIID riid,
	_COM_Outptr_ _At_(*ppv, _Post_readable_size_(_Inexpressible_(varies))) LPVOID  FAR* ppv
)
{

	HRESULT hr = TrueCoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
	if (riid == __uuidof(IMMDeviceEnumerator))
	{
		*ppv = new MMDeviceEnumeratorWrapper(static_cast<IMMDeviceEnumerator*>(*ppv));
	}
	return hr;
}
/// Made By XWine1 Team
HRESULT XGetImport(_In_opt_ HMODULE Module, _In_ HMODULE ImportModule, _In_ LPCSTR Import, _Out_ PIMAGE_THUNK_DATA* pThunk)
{
	if (ImportModule == nullptr)
		RETURN_HR(E_INVALIDARG);

	if (pThunk == nullptr)
		RETURN_HR(E_POINTER);

	if (Module == nullptr)
		Module = GetModuleHandleW(nullptr);

	auto dosHeader = (PIMAGE_DOS_HEADER)Module;
	auto ntHeaders = (PIMAGE_NT_HEADERS)((PBYTE)Module + dosHeader->e_lfanew);
	auto directory = &ntHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];

	if (directory->VirtualAddress == 0)
		RETURN_HR(E_FAIL);

	auto peImports = (PIMAGE_IMPORT_DESCRIPTOR)((PBYTE)Module + directory->VirtualAddress);

	for (size_t i = 0; peImports[i].Name; i++)
	{
		if (GetModuleHandleA((LPCSTR)((PBYTE)Module + peImports[i].Name)) != ImportModule)
			continue;

		auto iatThunks = (PIMAGE_THUNK_DATA)((PBYTE)Module + peImports[i].FirstThunk);
		auto intThunks = (PIMAGE_THUNK_DATA)((PBYTE)Module + peImports[i].OriginalFirstThunk);

		for (size_t j = 0; intThunks[j].u1.AddressOfData; j++)
		{
			if ((intThunks[j].u1.AddressOfData & IMAGE_ORDINAL_FLAG) != 0)
			{
				if (!IS_INTRESOURCE(Import))
					continue;

				if (((intThunks[j].u1.Ordinal & ~IMAGE_ORDINAL_FLAG) == (ULONG_PTR)Import))
				{
					*pThunk = &iatThunks[j];
					return S_OK;
				}

				continue;
			}

			if (strcmp(((PIMAGE_IMPORT_BY_NAME)((PBYTE)Module + intThunks[j].u1.AddressOfData))->Name, Import))
				continue;

			*pThunk = &iatThunks[j];
			return S_OK;
		}
	}

	*pThunk = nullptr;
	return (E_FAIL);
}
/// Made By XWine1 Team
HRESULT XPatchImport(_In_opt_ HMODULE Module, _In_ HMODULE ImportModule, _In_ PCSTR Import, _In_ PVOID Function)
{
	DWORD protect;
	PIMAGE_THUNK_DATA pThunk;
	RETURN_IF_FAILED(XGetImport(Module, ImportModule, Import, &pThunk));
	RETURN_LAST_ERROR_IF(!VirtualProtect(&pThunk->u1.Function, sizeof(ULONG_PTR), PAGE_READWRITE, &protect));
	pThunk->u1.Function = (ULONG_PTR)Function;
	RETURN_LAST_ERROR_IF(!VirtualProtect(&pThunk->u1.Function, sizeof(ULONG_PTR), protect, &protect));
	return S_OK;
}

HRESULT PatchNeededImports(_In_opt_ HMODULE Module, _In_ HMODULE ImportModule, _In_ PCSTR Import, _In_ PVOID Function)
{
	PIMAGE_THUNK_DATA pThunk;
	RETURN_IF_FAILED(XGetImport(Module, ImportModule, Import, &pThunk));

	return XPatchImport(Module, ImportModule, Import, Function);
}

HMODULE WINAPI LoadLibraryExW_X(LPCWSTR lpLibFileName, HANDLE  hFile, DWORD   dwFlags)
{
	printf("LoadLibraryExW_X: %S\n", lpLibFileName);
	if (wcscmp(lpLibFileName, L"xaudio2_9.dll") == 0 ||
		wcscmp(lpLibFileName, L"xaudio2_9d.dll") == 0)
	{
		void* returnAddress = _ReturnAddress();

		HMODULE hModule = NULL;
		GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, static_cast<LPCWSTR>(returnAddress), &hModule);

		// get caller path without file name and extension
		wchar_t callerPath[MAX_PATH];
		GetModuleFileNameW(hModule, callerPath, MAX_PATH);
		wchar_t* callerfileName = PathFindFileNameW(callerPath);
		PathRemoveFileSpecW(callerPath);

		// get the current module path without file name and extension
		wchar_t currentPath[MAX_PATH];
		GetModuleFileNameW(NULL, currentPath, MAX_PATH);
		PathRemoveFileSpecW(currentPath);



		if (wcscmp(currentPath, callerPath) == 0 &&
			!(wcscmp(callerfileName, L"xaudio2_9_x.dll") == 0))
		{
			LPCWSTR proxyXAudioModule = L"xaudio2_9_x.dll";
			return LoadLibraryExW(proxyXAudioModule, hFile, dwFlags);
		}
	}

	HMODULE mod = LoadLibraryExW(lpLibFileName, hFile, dwFlags);
	PatchNeededImports(mod, GetRuntimeModule(), "?GetActivationFactoryByPCWSTR@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z", GetActivationFactoryRedirect);
	return mod;
}


// Hooks for filesystem APIs
void FixRelativePath(LPCWSTR& lpFileName)
{
	static std::wstring convert{};
	std::wstring_view fileName(lpFileName);

	if (fileName.size() == 0)
		return;

	if (fileName[1] != ':')
	{
		convert = std::filesystem::current_path().c_str();
		convert.append(L"\\");
		convert.append(fileName);

		lpFileName = convert.data();
	}
	else if ((fileName[0] == 'G' || fileName[0] == 'g') && fileName[1] == ':')
	{

		static std::wstring trimPath{};
		trimPath = fileName.substr(2);
		fileName = trimPath.data();
		convert = std::filesystem::current_path().c_str();
		convert.append(fileName);

		lpFileName = convert.data();
	}
	else if ((fileName[0] == 'T' || fileName[0] == 't') && fileName[1] == ':')
	{

		static std::wstring trimPath{};
		trimPath = fileName.substr(2);
		fileName = trimPath.data();
		convert = winrt::Windows::Storage::ApplicationData::Current().TemporaryFolder().Path();
		convert.append(fileName);

		lpFileName = convert.data();
	}
}



HANDLE CreateFile2_Hook(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode,
	DWORD dwCreationDisposition, LPCREATEFILE2_EXTENDED_PARAMETERS pCreateExParams)
{
	FixRelativePath(lpFileName);

	printf("[CreateFile2] %ls\n", lpFileName);

	return TrueCreateFile2(lpFileName, dwDesiredAccess, dwShareMode, dwCreationDisposition, pCreateExParams);
}

BOOL CreateDirectoryA_Hook(LPCSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes)
{
	USES_CONVERSION;

	LPCWSTR PathName = A2W(lpPathName);

	FixRelativePath(PathName);

	return CreateDirectoryW(PathName, lpSecurityAttributes);
}

HMODULE WINAPI LoadLibraryExA_Hook(LPCSTR lpLibFileName, _Reserved_ HANDLE hFile, _In_ DWORD dwFlags)
{

	static std::string convert{};
	std::string_view fileName(lpLibFileName);

	if (fileName.size() != 0 && fileName[0] == 'G' && fileName[1] == ':')
	{
		std::string trimPath = std::string(fileName.substr(2));
		convert = std::filesystem::current_path().string();
		convert.append(trimPath);
		lpLibFileName = convert.c_str();
	}

	printf("LoadLibraryExA_Hook-: %s\n", lpLibFileName);




	HMODULE result = TrueLoadLibraryExA(lpLibFileName, hFile, dwFlags);
	// Print last error if failed
	if (result == NULL)
	{
		printf("LoadLibraryExA_Hook failed: %d\n", GetLastError());
	}

	PatchNeededImports(result, GetRuntimeModule(), "?GetActivationFactoryByPCWSTR@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z", GetActivationFactoryRedirect);
	return result;
}

HMODULE WINAPI LoadLibraryW_Hook(LPCWSTR lpLibFileName)
{

	static std::wstring convert{};
	std::wstring_view fileName(lpLibFileName);


	if (fileName[0] == 'G' && fileName[1] == ':' && fileName.size() != 0)
	{

		static std::wstring trimPath{};
		trimPath = fileName.substr(2);
		fileName = trimPath.data();
		convert = std::filesystem::current_path().c_str();
		convert.append(fileName);

		lpLibFileName = convert.data();
	}
	printf("LoadLibraryW_Hook: %ls\n", lpLibFileName);

	HMODULE result = TrueLoadLibraryW(lpLibFileName);
	PatchNeededImports(result, GetRuntimeModule(), "?GetActivationFactoryByPCWSTR@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z", GetActivationFactoryRedirect);
	return result;
}
HFILE WINAPI OpenFile_Hook(LPCSTR lpFileName, LPOFSTRUCT lpReOpenBuff, UINT uStyle)
{
	//FixRelativePath(lpFileName);

	return TrueOpenFile(lpFileName, lpReOpenBuff, uStyle);
}

HANDLE WINAPI CreateFileW_Hook(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
{
	FixRelativePath(lpFileName);

	//printf("[CreateFileW] %ls (Access: %X, Disposition: %X)\n", lpFileName, dwDesiredAccess, dwCreationDisposition);


	return TrueCreateFileW(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);

}

DWORD WINAPI GetFileAttributesW_Hook(LPCWSTR lpFileName)
{
	FixRelativePath(lpFileName);

	return TrueGetFileAttributesW(lpFileName);
}

BOOL WINAPI GetFileAttributesExW_Hook(LPCWSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation)
{
	FixRelativePath(lpFileName);

	return TrueGetFileAttributesExW(lpFileName, fInfoLevelId, lpFileInformation);
}


HANDLE WINAPI FindFirstFileW_Hook(LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData)
{
	FixRelativePath(lpFileName);

	return TrueFindFirstFileW(lpFileName, lpFindFileData);
}

BOOL WINAPI DeleteFileW_Hook(LPCWSTR lpFileName)
{
	FixRelativePath(lpFileName);

	return TrueDeleteFileW(lpFileName);
}

// The hook function for GetForCurrentThread
HRESULT STDMETHODCALLTYPE GetForCurrentThread_Hook(ICoreWindowStatic* pThis, CoreWindow** ppWindow)
{
	HRESULT hr = TrueGetForCurrentThread(pThis, ppWindow);
	if (FAILED(hr))
	{
		return hr;
	}

	if (*ppWindow == NULL)
		return hr;

	if (IsXboxCallee())
		*reinterpret_cast<ICoreWindowX**>(ppWindow) = new CoreWindowWrapperX(*ppWindow);

	return hr;
}

template <typename T>
inline T GetVTableMethod(void* table_base, std::uintptr_t index) {
	return (T)((*reinterpret_cast<std::uintptr_t**>(table_base))[index]);
}

HRESULT STDMETHODCALLTYPE CurrentAppActivateInstance_Hook(IActivationFactory* thisptr, IInspectable** instance)
{
	HRESULT hr = TrueActivateInstance(thisptr, instance);
	if (FAILED(hr))
		return hr;

	*instance = reinterpret_cast<Store::ILicenseInformation*>(new LicenseInformationWrapperX(reinterpret_cast<Store::ILicenseInformation*>(*instance)));
	return hr;
}

/* Hook for the WinRT RoGetActivationFactory function. */
inline HRESULT WINAPI RoGetActivationFactory_Hook(HSTRING classId, REFIID iid, void** factory)
{
	
	// Get the raw buffer from the HSTRING
	const wchar_t* rawString = WindowsGetStringRawBuffer(classId, nullptr);

	if (wcscmp(rawString, L"Windows.Xbox.Input.Gamepad") != 0 &&
		wcscmp(rawString, L"Windows.Networking.Connectivity.NetworkInformation") != 0)
	{
		printf("WinRT Class Activated: %S\n", rawString);
		// this might be a lil expensive? evaluate later
		if (wcscmp(rawString, L"Windows.UI.Core.CoreWindow") != 0)
			wprintf(L"%ls\n", rawString);
	}


	auto hr = 0;

	if (IsClassName(classId, "Windows.Networking.Connectivity.NetworkInformation"))
	{
		//printf("[HOOK] Windows.Networking.Connectivity.NetworkInformation\n");

		// Get the real factory first ? seems to be the right way to do it.
		HRESULT hr = TrueRoGetActivationFactory(classId, iid, factory);

		if (SUCCEEDED(hr) && factory && *factory)
		{
			// Check if the requested interface is INetworkInformationStatics
			if (iid == __uuidof(INetworkInformationStatics))
			{
				//printf("[HOOK] Wrapping INetworkInformationStatics\n");
				*factory = new NetworkInformationWrapperX(static_cast<INetworkInformationStatics*>(*factory));
			}
		}
		else
		{
			//printf("[HOOK] ERROR: Failed to get real NetworkInformation factory: 0x%08X\n", hr);
		}

		return hr;
	}

	if (IsClassName(classId, "Windows.ApplicationModel.Store.CurrentApp"))
	{
		//printf("CLASS: Windows.ApplicationModel.Store.CurrentApp\n");
		hr = TrueRoGetActivationFactory(classId, iid, factory);

		if (FAILED(hr))
			return hr;

		// @unixian: is there a better way to do this? it works, but we never know if the vtable will change (microsoft please don't make breaking ABI changes)
		TrueActivateInstance = GetVTableMethod<decltype(TrueActivateInstance)>(*factory, 6);

		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&TrueActivateInstance, CurrentAppActivateInstance_Hook);
		DetourTransactionCommit();
	}

	if (IsClassName(classId, "Windows.ApplicationModel.Core.CoreApplication"))
	{
		printf("CLASS: Windows.ApplicationModel.Core.CoreApplication\n");
		ComPtr<IActivationFactory> realFactory;

		hr = TrueRoGetActivationFactory(HStringReference(RuntimeClass_Windows_ApplicationModel_Core_CoreApplication).Get(), IID_PPV_ARGS(&realFactory));

		if (FAILED(hr))
			return hr;

		ComPtr<CoreApplicationWrapperX> wrappedFactory = Make<CoreApplicationWrapperX>(realFactory);

		return wrappedFactory.CopyTo(iid, factory);
	}

	if (IsClassName(classId, "Windows.UI.Core.CoreWindow"))
	{
		printf("CLASS: Windows.UI.Core.CoreWindow\n");
		//
		// for now we just hook GetForCurrentThread to get the CoreWindow but i'll change it later to
		// wrap ICoreWindowStatic or as zombie said another thing that works is by hooking IFrameworkView::SetWindow
		// but for now this *should* work just fine -AleBlbl
		//
		ComPtr<ICoreWindowStatic> coreWindowStatic;
		hr = TrueRoGetActivationFactory(HStringReference(RuntimeClass_Windows_UI_Core_CoreWindow).Get(), IID_PPV_ARGS(&coreWindowStatic));
		if (FAILED(hr)) {
			printf("FAILEDDDDDD\n");
			return hr;
		}

		if (!TrueGetForCurrentThread)
		{
			*reinterpret_cast<void**>(&TrueGetForCurrentThread) = (*reinterpret_cast<void***>(coreWindowStatic.Get()))[6];

			DetourTransactionBegin();
			DetourUpdateThread(GetCurrentThread());
			DetourAttach(&TrueGetForCurrentThread, GetForCurrentThread_Hook);
			DetourTransactionCommit();
		}

		return coreWindowStatic.CopyTo(iid, factory);
	}

	// After WinDurango overrides try to load the rest

	if (!pDllGetActivationFactory)
	{
		auto library = LoadPackagedLibrary(L"winrt_x.dll", 0);

		if (!library) library = LoadLibraryW(L"winrt_x.dll");

		if (!library) return hr;

		pDllGetActivationFactory = reinterpret_cast<DllGetActivationFactoryFunc>
			(GetProcAddress(library, "DllGetActivationFactory"));

		if (!pDllGetActivationFactory)
			return hr;
	}

	// fallback
	ComPtr<IActivationFactory> fallbackFactory;
	hr = pDllGetActivationFactory(classId, fallbackFactory.GetAddressOf());

	if (SUCCEEDED(hr))
		return fallbackFactory.CopyTo(iid, factory);

	return TrueRoGetActivationFactory(classId, iid, factory);
}

HRESULT WINAPI GetActivationFactoryRedirect(PCWSTR str, REFIID riid, void** ppFactory)
{
	HRESULT hr;
	HSTRING className;
	HSTRING_HEADER classNameHeader;

	if (FAILED(hr = WindowsCreateStringReference(str, wcslen(str), &classNameHeader, &className)))
		return hr;

	if (wcscmp(str, L"Windows.Xbox.Input.Gamepad") != 0 &&
		wcscmp(str, L"Windows.Networking.Connectivity.NetworkInformation") != 0) 
	{
		printf("GetActivationFactoryRedirect: %S\n", str);
	}

	hr = RoGetActivationFactory_Hook(className, riid, ppFactory);
	WindowsDeleteString(className);
	return hr;
}

// ALL HAPPY DUNGEONS STUFF


//////////////////////////////////////