#pragma once
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct DevicePresenceChangeSubscription : DevicePresenceChangeSubscriptionT<DevicePresenceChangeSubscription>
    {
        DevicePresenceChangeSubscription() = default;

        winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring ResourceUri();
        uint32_t SubscriptionId();
        hstring XboxUserId();
    };
}
