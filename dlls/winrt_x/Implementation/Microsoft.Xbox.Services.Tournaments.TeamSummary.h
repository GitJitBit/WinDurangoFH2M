#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamSummary.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamSummary : TeamSummaryT<TeamSummary>
    {
        TeamSummary() = default;

        hstring Id();
        winrt::Microsoft::Xbox::Services::Tournaments::TeamState TeamState();
        uint64_t Ranking();
    };
}
