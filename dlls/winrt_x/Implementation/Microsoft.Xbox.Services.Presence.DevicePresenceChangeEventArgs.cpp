#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring DevicePresenceChangeEventArgs::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType DevicePresenceChangeEventArgs::DeviceType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool DevicePresenceChangeEventArgs::IsUserLoggedOnDevice()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
