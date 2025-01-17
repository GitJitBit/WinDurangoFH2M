#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAddress.h"
#include "Windows.Xbox.Networking.SecureDeviceAddress.g.cpp"
#include <winrt/Windows.Security.Cryptography.h>

namespace winrt::Windows::Xbox::Networking::implementation
{
    SecureDeviceAddress::SecureDeviceAddress(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
		printf("[Windows::Xbox::Networking::SecureDeviceAddress] Constructor called\n");
		m_addrBuf = buffer;
    }
    int32_t SecureDeviceAddress::CompareBuffers(winrt::Windows::Storage::Streams::IBuffer const& buffer1, winrt::Windows::Storage::Streams::IBuffer const& buffer2)
    {
        throw hresult_not_implemented();
    }
    int32_t SecureDeviceAddress::CompareBytes(array_view<uint8_t const> bytes1, array_view<uint8_t const> bytes2)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress::FromBytes(array_view<uint8_t const> bytes)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress::GetLocal()
    {
		printf("[Windows::Xbox::Networking::SecureDeviceAddress] GetLocal called\n");

        /*std::vector<uint8_t> binaryData = {127, 0, 0, 1};
        auto buffer = winrt::Windows::Storage::Streams::Buffer(static_cast<uint32_t>(binaryData.size( )));
        buffer.Length(static_cast<uint32_t>(binaryData.size( )));
        memcpy(buffer.data( ), binaryData.data( ), binaryData.size( ));
        auto base64String = winrt::Windows::Security::Cryptography::CryptographicBuffer::EncodeToBase64String(buffer);
        return SecureDeviceAddress::FromBase64String(base64String.c_str( ));*/
        return SecureDeviceAddress::FromBase64String(L"MTI3LjAuMC4x");
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress::CreateDedicatedServerAddress(hstring const& hostnameOrAddress)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress::FromBase64String(hstring const& base64String)
    {
        winrt::Windows::Storage::Streams::IBuffer buffer = winrt::Windows::Security::Cryptography::CryptographicBuffer::DecodeFromBase64String(base64String);
		return winrt::make<Windows::Xbox::Networking::implementation::SecureDeviceAddress>(buffer);
    }
    winrt::event_token SecureDeviceAddress::BufferChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAddress, winrt::Windows::Foundation::IInspectable> const& handler)
    {
        throw hresult_not_implemented();
    }
    void SecureDeviceAddress::BufferChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer SecureDeviceAddress::GetBuffer()
    {
        throw hresult_not_implemented();
    }
    int32_t SecureDeviceAddress::Compare(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& secureDeviceAddress)
    {
        throw hresult_not_implemented();
    }
    hstring SecureDeviceAddress::GetBase64String()
    {
		printf("[Windows::Xbox::Networking::SecureDeviceAddress] GetBase64String called\n");
		return winrt::Windows::Security::Cryptography::CryptographicBuffer::EncodeToBase64String(m_addrBuf);
    }
    bool SecureDeviceAddress::IsLocal()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::NetworkAccessType SecureDeviceAddress::NetworkAccessType()
    {
        throw hresult_not_implemented();
    }
}
