#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionTournamentsServer : MultiplayerSessionTournamentsServerT<MultiplayerSessionTournamentsServer>
    {
        MultiplayerSessionTournamentsServer() = default;

        winrt::Microsoft::Xbox::Services::Tournaments::TournamentReference TournamentReference();
        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference> Teams();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationState RegistrationState();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationReason RegistrationReason();
        winrt::Windows::Foundation::DateTime NextGameStartTime();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference NextGameSessionRef();
        winrt::Windows::Foundation::DateTime LastGameEndTime();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult LastTeamResult();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultSource LastGameResultSource();
    };
}
