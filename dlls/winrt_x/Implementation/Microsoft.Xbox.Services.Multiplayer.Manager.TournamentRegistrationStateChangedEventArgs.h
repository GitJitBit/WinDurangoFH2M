#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentRegistrationStateChangedEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct TournamentRegistrationStateChangedEventArgs : TournamentRegistrationStateChangedEventArgsT<TournamentRegistrationStateChangedEventArgs>
    {
        TournamentRegistrationStateChangedEventArgs() = default;

        winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationState RegistrationState();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationReason RegistrationReason();
    };
}
