#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionMatchmakingServer : MultiplayerSessionMatchmakingServerT<MultiplayerSessionMatchmakingServer>
    {
        MultiplayerSessionMatchmakingServer() = default;

        winrt::Microsoft::Xbox::Services::Multiplayer::MatchmakingStatus Status();
        hstring StatusDetails();
        winrt::Windows::Foundation::TimeSpan TypicalWait();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference TargetSessionRef();
    };
}
