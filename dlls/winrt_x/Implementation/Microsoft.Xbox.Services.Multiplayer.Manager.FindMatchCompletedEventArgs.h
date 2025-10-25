#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.FindMatchCompletedEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct FindMatchCompletedEventArgs : FindMatchCompletedEventArgsT<FindMatchCompletedEventArgs>
    {
        FindMatchCompletedEventArgs() = default;

        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MatchStatus MatchStatus();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerMeasurementFailure InitializationFailureCause();
    };
}
