#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    hstring SecureDeviceSocketDescription::Name()
    {
        LOG_NOT_IMPLEMENTED(); return L"";
    }
    winrt::Windows::Xbox::Networking::SecureIpProtocol SecureDeviceSocketDescription::IpProtocol()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint16_t SecureDeviceSocketDescription::BoundPortRangeLower()
    {
        LOG_NOT_IMPLEMENTED(); return 0;
    }
    uint16_t SecureDeviceSocketDescription::BoundPortRangeUpper()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketUsage SecureDeviceSocketDescription::AllowedUsages()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
