#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequestResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentRequestResult : TournamentRequestResultT<TournamentRequestResult>
    {
        TournamentRequestResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::Tournament> Tournaments();
        bool HasNext();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TournamentRequestResult> GetNextAsync();
    };
}
