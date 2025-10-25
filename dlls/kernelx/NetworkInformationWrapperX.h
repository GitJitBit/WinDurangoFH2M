#pragma once
#include <windows.networking.connectivity.h>

using namespace ABI::Windows::Networking::Connectivity;
using namespace ABI::Windows::Foundation;

class NetworkInformationWrapperX : public INetworkInformationStatics
{
public:
    NetworkInformationWrapperX(INetworkInformationStatics* realNetworkInfo);

    // IUnknown methods
    HRESULT STDMETHODCALLTYPE QueryInterface(
        /* [in] */ REFIID riid,
        /* [iid_is][out] */ _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject) override;

    ULONG STDMETHODCALLTYPE AddRef(void) override;
    ULONG STDMETHODCALLTYPE Release(void) override;

    // IInspectable methods  
    HRESULT STDMETHODCALLTYPE GetIids(ULONG* iidCount, IID** iids) override;
    HRESULT STDMETHODCALLTYPE GetRuntimeClassName(HSTRING* className) override;
    HRESULT STDMETHODCALLTYPE GetTrustLevel(TrustLevel* trustLevel) override;

    // INetworkInformationStatics methods
    HRESULT STDMETHODCALLTYPE GetConnectionProfiles(
        __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile** value) override;

    HRESULT STDMETHODCALLTYPE GetInternetConnectionProfile(
        __RPC__deref_out_opt IConnectionProfile** value) override;

    HRESULT STDMETHODCALLTYPE GetLanIdentifiers(
        __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier** value) override;

    HRESULT STDMETHODCALLTYPE GetHostNames(
        __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName** value) override;

    HRESULT STDMETHODCALLTYPE GetProxyConfigurationAsync(
        __RPC__in ABI::Windows::Foundation::IUriRuntimeClass* uri,
        __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration** value) override;

    HRESULT STDMETHODCALLTYPE GetSortedEndpointPairs(
        __RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair* destinationList,
        __RPC__in ABI::Windows::Networking::HostNameSortOptions sortOptions,
        __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair** value) override;

    HRESULT STDMETHODCALLTYPE add_NetworkStatusChanged(
        __RPC__in ABI::Windows::Networking::Connectivity::INetworkStatusChangedEventHandler* value,
        __RPC__out EventRegistrationToken* token) override;

    HRESULT STDMETHODCALLTYPE remove_NetworkStatusChanged(
        __RPC__in EventRegistrationToken token) override;

private:
    LONG m_refCount = 1;
    INetworkInformationStatics* m_realNetworkInfo;
};