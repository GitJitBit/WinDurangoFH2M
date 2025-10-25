#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionChangeEventArgs : MultiplayerSessionChangeEventArgsT<MultiplayerSessionChangeEventArgs>
    {
        MultiplayerSessionChangeEventArgs() = default;

        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        hstring Branch();
        uint64_t ChangeNumber();
    };
}
