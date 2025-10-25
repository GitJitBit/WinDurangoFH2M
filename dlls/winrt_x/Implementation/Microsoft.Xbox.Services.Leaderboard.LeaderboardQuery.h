#pragma once
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardQuery.g.h"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    struct LeaderboardQuery : LeaderboardQueryT<LeaderboardQuery>
    {
        LeaderboardQuery() = default;

        bool SkipResultToMe();
        void SkipResultToMe(bool value);
        uint32_t SkipResultToRank();
        void SkipResultToRank(uint32_t value);
        uint32_t MaxItems();
        void MaxItems(uint32_t value);
        winrt::Microsoft::Xbox::Services::Leaderboard::SortOrder Order();
        void Order(winrt::Microsoft::Xbox::Services::Leaderboard::SortOrder const& value);
        uint64_t CallbackId();
        void CallbackId(uint64_t value);
        hstring StatName();
        hstring SocialGroup();
        bool HasNext();
    };
}
namespace winrt::Microsoft::Xbox::Services::Leaderboard::factory_implementation
{
    struct LeaderboardQuery : LeaderboardQueryT<LeaderboardQuery, implementation::LeaderboardQuery>
    {
    };
}
