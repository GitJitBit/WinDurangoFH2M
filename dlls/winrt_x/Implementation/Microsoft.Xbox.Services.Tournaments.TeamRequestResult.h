#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamRequestResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamRequestResult : TeamRequestResultT<TeamRequestResult>
    {
        TeamRequestResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TeamInfo> Teams();
        bool HasNext();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TeamRequestResult> GetNextAsync();
    };
}
