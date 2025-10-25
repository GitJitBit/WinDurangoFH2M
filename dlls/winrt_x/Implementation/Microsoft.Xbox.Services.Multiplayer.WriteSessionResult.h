#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct WriteSessionResult : WriteSessionResultT<WriteSessionResult>
    {
        WriteSessionResult() = default;

        bool Succeeded();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession Session();
        winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus Status();
    };
}
