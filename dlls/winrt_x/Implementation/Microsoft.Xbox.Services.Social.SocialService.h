#pragma once
#include "Microsoft.Xbox.Services.Social.SocialService.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct SocialService : SocialServiceT<SocialService>
    {
        SocialService() = default;

        winrt::event_token SocialRelationshipChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Social::SocialRelationshipChangeEventArgs> const& __param0);
        void SocialRelationshipChanged(winrt::event_token const& __param0) noexcept;
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationshipResult> GetSocialRelationshipsAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationshipResult> GetSocialRelationshipsAsync(winrt::Microsoft::Xbox::Services::Social::SocialRelationship socialRelationshipFilter);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationshipResult> GetSocialRelationshipsAsync(hstring xboxUserId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationshipResult> GetSocialRelationshipsAsync(winrt::Microsoft::Xbox::Services::Social::SocialRelationship socialRelationshipFilter, uint32_t startIndex, uint32_t maxItems);
        winrt::Microsoft::Xbox::Services::Social::SocialRelationshipChangeSubscription SubscribeToSocialRelationshipChange(hstring const& xboxUserId);
        void UnsubscribeFromSocialRelationshipChange(winrt::Microsoft::Xbox::Services::Social::SocialRelationshipChangeSubscription const& subscription);
    };
}
