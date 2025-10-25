#pragma once
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct DevicePresenceChangeEventArgs : DevicePresenceChangeEventArgsT<DevicePresenceChangeEventArgs>
    {
        DevicePresenceChangeEventArgs() = default;

        hstring XboxUserId();
        winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType DeviceType();
        bool IsUserLoggedOnDevice();
    };
}
