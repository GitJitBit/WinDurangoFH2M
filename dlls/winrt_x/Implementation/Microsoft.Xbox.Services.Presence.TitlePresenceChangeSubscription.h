#pragma once
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeSubscription.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct TitlePresenceChangeSubscription : TitlePresenceChangeSubscriptionT<TitlePresenceChangeSubscription>
    {
        TitlePresenceChangeSubscription() = default;

        winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring ResourceUri();
        uint32_t SubscriptionId();
        hstring XboxUserId();
        uint32_t TitleId();
    };
}
