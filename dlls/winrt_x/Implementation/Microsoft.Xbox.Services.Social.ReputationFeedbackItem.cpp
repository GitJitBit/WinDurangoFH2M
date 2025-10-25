#include "pch.h"
#include "Microsoft.Xbox.Services.Social.ReputationFeedbackItem.h"
#include "Microsoft.Xbox.Services.Social.ReputationFeedbackItem.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    ReputationFeedbackItem::ReputationFeedbackItem(hstring const& xboxUserId, winrt::Microsoft::Xbox::Services::Social::ReputationFeedbackType const& reputationFeedbackType, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& sessionReference, hstring const& reasonMessage, hstring const& evidenceResourceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ReputationFeedbackItem::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::ReputationFeedbackType ReputationFeedbackItem::FeedbackType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference ReputationFeedbackItem::SessionReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ReputationFeedbackItem::ReasonMessage()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ReputationFeedbackItem::EvidenceResourceId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
