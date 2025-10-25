#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSubscriptionLostEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSubscriptionLostEventArgs : MultiplayerSubscriptionLostEventArgsT<MultiplayerSubscriptionLostEventArgs>
    {
        MultiplayerSubscriptionLostEventArgs() = default;

    };
}
