#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamChangeEventArgs : TeamChangeEventArgsT<TeamChangeEventArgs>
    {
        TeamChangeEventArgs() = default;

        hstring OrganizerId();
        hstring TournamentId();
        hstring TeamId();
    };
}
