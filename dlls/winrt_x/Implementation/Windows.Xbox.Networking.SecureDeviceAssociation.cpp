#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociation.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociation.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAssociation SecureDeviceAssociation::GetAssociationBySocketAddressBytes(array_view<uint8_t const> remoteSocketAddressBytes, array_view<uint8_t const> localSocketAddressBytes)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociation SecureDeviceAssociation::GetAssociationByHostNamesAndPorts(winrt::Windows::Networking::HostName const& remoteHostName, hstring const& remotePort, winrt::Windows::Networking::HostName const& localHostName, hstring const& localPort)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SecureDeviceAssociation::StateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAssociation, winrt::Windows::Xbox::Networking::SecureDeviceAssociationStateChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociation::StateChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SecureDeviceAssociation::DestroyAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociation::GetRemoteSocketAddressBytes(array_view<uint8_t> socketAddressBytes)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SecureDeviceAssociation::GetLocalSocketAddressBytes(array_view<uint8_t> socketAddressBytes)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationState SecureDeviceAssociation::State()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate SecureDeviceAssociation::Template()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAssociation::RemoteSecureDeviceAddress()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Networking::HostName SecureDeviceAssociation::RemoteHostName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociation::RemotePort()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Networking::HostName SecureDeviceAssociation::LocalHostName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAssociation::LocalPort()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
