#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAddress.h"
#include "Windows.Xbox.Networking.SecureDeviceAddress.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    SecureDeviceAddress::SecureDeviceAddress(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t SecureDeviceAddress::CompareBuffers(winrt::Windows::Storage::Streams::IBuffer const& buffer1, winrt::Windows::Storage::Streams::IBuffer const& buffer2)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t SecureDeviceAddress::CompareBytes(array_view<uint8_t const> bytes1, array_view<uint8_t const> bytes2)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress::FromBytes(array_view<uint8_t const> bytes)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress::GetLocal()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress::CreateDedicatedServerAddress(hstring const& hostnameOrAddress)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress::FromBase64String(hstring const& base64String)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token SecureDeviceAddress::BufferChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAddress, winrt::Windows::Foundation::IInspectable> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SecureDeviceAddress::BufferChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer SecureDeviceAddress::GetBuffer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t SecureDeviceAddress::Compare(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& secureDeviceAddress)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SecureDeviceAddress::GetBase64String()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool SecureDeviceAddress::IsLocal()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::NetworkAccessType SecureDeviceAddress::NetworkAccessType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
