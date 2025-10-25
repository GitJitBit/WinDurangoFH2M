#include "pch.h"
#include "Microsoft.Xbox.Services.Social.ReputationService.h"
#include "Microsoft.Xbox.Services.Social.ReputationService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    winrt::Windows::Foundation::IAsyncAction ReputationService::SubmitReputationFeedbackAsync(hstring xboxUserId, winrt::Microsoft::Xbox::Services::Social::ReputationFeedbackType reputationFeedbackType, hstring sessionName, hstring reasonMessage, hstring evidenceResourceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ReputationService::SubmitBatchReputationFeedbackAsync(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::ReputationFeedbackItem> feedbackItems)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
