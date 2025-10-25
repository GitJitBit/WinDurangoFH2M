#pragma once
#include "Microsoft.Xbox.Services.Statistics.Manager.LeaderboardResultEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    struct LeaderboardResultEventArgs : LeaderboardResultEventArgsT<LeaderboardResultEventArgs>
    {
        LeaderboardResultEventArgs() = default;

        winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult Result();
    };
}
