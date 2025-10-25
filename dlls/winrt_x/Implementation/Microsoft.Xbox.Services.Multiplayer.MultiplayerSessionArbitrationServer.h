#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionArbitrationServer : MultiplayerSessionArbitrationServerT<MultiplayerSessionArbitrationServer>
    {
        MultiplayerSessionArbitrationServer() = default;

        winrt::Windows::Foundation::DateTime ArbitrationStartTime();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationState ResultState();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultSource ResultSource();
        uint32_t ResultConfidenceLevel();
        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> Results();
    };
}
