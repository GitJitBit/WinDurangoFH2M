#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequestResult.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequestResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::Tournament> TournamentRequestResult::Tournaments()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool TournamentRequestResult::HasNext()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TournamentRequestResult> TournamentRequestResult::GetNextAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
