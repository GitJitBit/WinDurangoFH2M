#pragma once
#include "Microsoft.Xbox.Services.Social.ReputationFeedbackItem.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct ReputationFeedbackItem : ReputationFeedbackItemT<ReputationFeedbackItem>
    {
        ReputationFeedbackItem() = default;

        ReputationFeedbackItem(hstring const& xboxUserId, winrt::Microsoft::Xbox::Services::Social::ReputationFeedbackType const& reputationFeedbackType, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& sessionReference, hstring const& reasonMessage, hstring const& evidenceResourceId);
        hstring XboxUserId();
        winrt::Microsoft::Xbox::Services::Social::ReputationFeedbackType FeedbackType();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        hstring ReasonMessage();
        hstring EvidenceResourceId();
    };
}
namespace winrt::Microsoft::Xbox::Services::Social::factory_implementation
{
    struct ReputationFeedbackItem : ReputationFeedbackItemT<ReputationFeedbackItem, implementation::ReputationFeedbackItem>
    {
    };
}
