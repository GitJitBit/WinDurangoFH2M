#pragma once
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeSubscription.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct SocialRelationshipChangeSubscription : SocialRelationshipChangeSubscriptionT<SocialRelationshipChangeSubscription>
    {
        SocialRelationshipChangeSubscription() = default;

        winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring ResourceUri();
        uint32_t SubscriptionId();
        hstring XboxUserId();
    };
}
