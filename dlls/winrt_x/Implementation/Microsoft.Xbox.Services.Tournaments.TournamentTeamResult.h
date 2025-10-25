#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentTeamResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentTeamResult : TournamentTeamResultT<TournamentTeamResult>
    {
        TournamentTeamResult() = default;

        winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultState State();
        void State(winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultState const& value);
        uint64_t Ranking();
        void Ranking(uint64_t value);
    };
}
namespace winrt::Microsoft::Xbox::Services::Tournaments::factory_implementation
{
    struct TournamentTeamResult : TournamentTeamResultT<TournamentTeamResult, implementation::TournamentTeamResult>
    {
    };
}
