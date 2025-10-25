#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentGameSessionReadyEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct TournamentGameSessionReadyEventArgs : TournamentGameSessionReadyEventArgsT<TournamentGameSessionReadyEventArgs>
    {
        TournamentGameSessionReadyEventArgs() = default;

        winrt::Windows::Foundation::DateTime StartTime();
    };
}
