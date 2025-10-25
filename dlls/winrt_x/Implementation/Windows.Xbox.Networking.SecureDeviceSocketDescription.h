#pragma once
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceSocketDescription : SecureDeviceSocketDescriptionT<SecureDeviceSocketDescription>
    {
        SecureDeviceSocketDescription() = default;

        hstring Name();
        winrt::Windows::Xbox::Networking::SecureIpProtocol IpProtocol();
        uint16_t BoundPortRangeLower();
        uint16_t BoundPortRangeUpper();
        winrt::Windows::Xbox::Networking::SecureDeviceSocketUsage AllowedUsages();
    };
}
