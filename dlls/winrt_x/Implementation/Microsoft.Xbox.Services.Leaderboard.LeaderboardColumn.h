#pragma once
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.g.h"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    struct LeaderboardColumn : LeaderboardColumnT<LeaderboardColumn>
    {
        LeaderboardColumn() = default;

        hstring DisplayName();
        hstring StatisticName();
        winrt::Windows::Foundation::PropertyType StatisticType();
    };
}
