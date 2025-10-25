#pragma once
#include "Microsoft.Xbox.Services.Social.ReputationService.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct ReputationService : ReputationServiceT<ReputationService>
    {
        ReputationService() = default;

        winrt::Windows::Foundation::IAsyncAction SubmitReputationFeedbackAsync(hstring xboxUserId, winrt::Microsoft::Xbox::Services::Social::ReputationFeedbackType reputationFeedbackType, hstring sessionName, hstring reasonMessage, hstring evidenceResourceId);
        winrt::Windows::Foundation::IAsyncAction SubmitBatchReputationFeedbackAsync(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::ReputationFeedbackItem> feedbackItems);
    };
}
