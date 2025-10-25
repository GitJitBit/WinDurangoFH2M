#pragma once
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    struct LeaderboardResult : LeaderboardResultT<LeaderboardResult>
    {
        LeaderboardResult() = default;

        hstring DisplayName();
        uint32_t TotalRowCount();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardColumn> Columns();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardRow> Rows();
        bool HasNext();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> GetNextAsync(uint32_t maxItems);
        winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery GetNextQuery();
    };
}
