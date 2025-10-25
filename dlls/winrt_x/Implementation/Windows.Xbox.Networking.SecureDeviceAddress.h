#pragma once
#include "Windows.Xbox.Networking.SecureDeviceAddress.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAddress : SecureDeviceAddressT<SecureDeviceAddress>
    {
        SecureDeviceAddress() = default;

        SecureDeviceAddress(winrt::Windows::Storage::Streams::IBuffer const& buffer);
        static int32_t CompareBuffers(winrt::Windows::Storage::Streams::IBuffer const& buffer1, winrt::Windows::Storage::Streams::IBuffer const& buffer2);
        static int32_t CompareBytes(array_view<uint8_t const> bytes1, array_view<uint8_t const> bytes2);
        static winrt::Windows::Xbox::Networking::SecureDeviceAddress FromBytes(array_view<uint8_t const> bytes);
        static winrt::Windows::Xbox::Networking::SecureDeviceAddress GetLocal();
        static winrt::Windows::Xbox::Networking::SecureDeviceAddress CreateDedicatedServerAddress(hstring const& hostnameOrAddress);
        static winrt::Windows::Xbox::Networking::SecureDeviceAddress FromBase64String(hstring const& base64String);
        winrt::event_token BufferChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Networking::SecureDeviceAddress, winrt::Windows::Foundation::IInspectable> const& handler);
        void BufferChanged(winrt::event_token const& token) noexcept;
        winrt::Windows::Storage::Streams::IBuffer GetBuffer();
        int32_t Compare(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& secureDeviceAddress);
        hstring GetBase64String();
        bool IsLocal();
        winrt::Windows::Xbox::Networking::NetworkAccessType NetworkAccessType();
    };
}
namespace winrt::Windows::Xbox::Networking::factory_implementation
{
    struct SecureDeviceAddress : SecureDeviceAddressT<SecureDeviceAddress, implementation::SecureDeviceAddress>
    {
    };
}
