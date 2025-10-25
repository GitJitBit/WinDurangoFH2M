#include "pch.h"
#include "NetworkInformationWrapperX.h"
#include "../common/Logger.h"

NetworkInformationWrapperX::NetworkInformationWrapperX(INetworkInformationStatics* realNetworkInfo)
    : m_realNetworkInfo(realNetworkInfo)
{
    //printf("[NetworkInformationWrapperX] Wrapper created\n");
    if (m_realNetworkInfo)
        m_realNetworkInfo->AddRef();
}

HRESULT __stdcall NetworkInformationWrapperX::QueryInterface(REFIID riid, void** ppvObject)
{
	LOG_DEBUG("[NetworkInformationWrapperX] QueryInterface called");
    LPOLESTR str = nullptr;
    StringFromIID(riid, &str);
    //wprintf(L"[NetworkInformationWrapperX] QueryInterface called for IID: %ls\n", str);
    CoTaskMemFree(str);

    if (!ppvObject)
        return E_POINTER;

    *ppvObject = nullptr;

    if (riid == IID_IUnknown || riid == IID_IInspectable || riid == __uuidof(INetworkInformationStatics))
    {
        *ppvObject = static_cast<INetworkInformationStatics*>(this);
        AddRef();
        return S_OK;
    }

    return m_realNetworkInfo->QueryInterface(riid, ppvObject);
}

ULONG __stdcall NetworkInformationWrapperX::AddRef(void)
{
    //printf("[NetworkInformationWrapperX] AddRef called\n");
    return InterlockedIncrement(&m_refCount);
}

ULONG __stdcall NetworkInformationWrapperX::Release(void)
{
    //printf("[NetworkInformationWrapperX] Release called\n");
    ULONG count = InterlockedDecrement(&m_refCount);
    if (count == 0)
    {
        if (m_realNetworkInfo)
            m_realNetworkInfo->Release();
        delete this;
    }
    return count;
}

// IInspectable methods
HRESULT __stdcall NetworkInformationWrapperX::GetIids(ULONG* iidCount, IID** iids)
{
    //printf("[NetworkInformationWrapperX] GetIids called\n");
    return m_realNetworkInfo->GetIids(iidCount, iids);
}

HRESULT __stdcall NetworkInformationWrapperX::GetRuntimeClassName(HSTRING* className)
{
    //printf("[NetworkInformationWrapperX] GetRuntimeClassName called\n");
    return m_realNetworkInfo->GetRuntimeClassName(className);
}

HRESULT __stdcall NetworkInformationWrapperX::GetTrustLevel(TrustLevel* trustLevel)
{
    //printf("[NetworkInformationWrapperX] GetTrustLevel called\n");
    return m_realNetworkInfo->GetTrustLevel(trustLevel);
}

HRESULT __stdcall NetworkInformationWrapperX::GetConnectionProfiles(
    __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile** value)
{
    //printf("[NetworkInformationWrapperX] GetConnectionProfiles called\n");

    HRESULT hr = m_realNetworkInfo->GetConnectionProfiles(value);

    if (SUCCEEDED(hr) && *value != nullptr)
    {
        UINT32 count = 0;
        (*value)->get_Size(&count);
        printf("[NetworkInformationWrapperX] Found %d connection profiles\n", count);

    }

    return hr;
}

HRESULT __stdcall NetworkInformationWrapperX::GetInternetConnectionProfile(
    __RPC__deref_out_opt IConnectionProfile** value)
{
    HRESULT hr = m_realNetworkInfo->GetInternetConnectionProfile(value);

    if (SUCCEEDED(hr) && *value != nullptr)
    {
        //printf("[NetworkInformationWrapperX] NTERNET CONNECTION AVAILABLE\n");
        //printf("[NetworkInformationWrapperX] Connection profile pointer: %p\n", *value);
    }
    else if (SUCCEEDED(hr) && *value == nullptr)
    {
       //printf("[NetworkInformationWrapperX]  NO INTERNET CONNECTION\n");
    }
    else
    {
        //printf("[NetworkInformationWrapperX] ERROR getting internet connection: 0x%08X\n", hr);
    }

    return hr;
}

HRESULT __stdcall NetworkInformationWrapperX::GetLanIdentifiers(
    __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier** value)
{
    //printf("[NetworkInformationWrapperX] GetLanIdentifiers called\n");
    return m_realNetworkInfo->GetLanIdentifiers(value);
}

HRESULT __stdcall NetworkInformationWrapperX::GetHostNames(
    __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName** value)
{
    //printf("[NetworkInformationWrapperX] GetHostNames called - game checking device hostnames\n");

    HRESULT hr = m_realNetworkInfo->GetHostNames(value);

    if (SUCCEEDED(hr) && *value != nullptr)
    {
        UINT32 count = 0;
        (*value)->get_Size(&count);
        //printf("[NetworkInformationWrapperX] Found %d hostnames\n", count);
    }

    return hr;
}

HRESULT __stdcall NetworkInformationWrapperX::GetProxyConfigurationAsync(
    __RPC__in ABI::Windows::Foundation::IUriRuntimeClass* uri,
    __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration** value)
{
    //printf("[NetworkInformationWrapperX] GetProxyConfigurationAsync called\n");
    return m_realNetworkInfo->GetProxyConfigurationAsync(uri, value);
}

HRESULT __stdcall NetworkInformationWrapperX::GetSortedEndpointPairs(
    __RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair* destinationList,
    __RPC__in ABI::Windows::Networking::HostNameSortOptions sortOptions,
    __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair** value)
{
    //printf("[NetworkInformationWrapperX] GetSortedEndpointPairs called\n");
    return m_realNetworkInfo->GetSortedEndpointPairs(destinationList, sortOptions, value);
}

HRESULT __stdcall NetworkInformationWrapperX::add_NetworkStatusChanged(
    __RPC__in ABI::Windows::Networking::Connectivity::INetworkStatusChangedEventHandler* value,
    __RPC__out EventRegistrationToken* token)
{
    //printf("[NetworkInformationWrapperX] GAME IS REGISTERING FOR NETWORK STATUS CHANGES!\n");
    //printf("[NetworkInformationWrapperX] Game wants to be notified when network status changes\n");
    return m_realNetworkInfo->add_NetworkStatusChanged(value, token);
}

HRESULT __stdcall NetworkInformationWrapperX::remove_NetworkStatusChanged(
    __RPC__in EventRegistrationToken token)
{
    //printf("[NetworkInformationWrapperX] remove_NetworkStatusChanged called\n");
    return m_realNetworkInfo->remove_NetworkStatusChanged(token);
}