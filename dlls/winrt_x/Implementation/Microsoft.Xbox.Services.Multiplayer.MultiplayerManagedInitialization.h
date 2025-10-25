#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerManagedInitialization.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerManagedInitialization : MultiplayerManagedInitializationT<MultiplayerManagedInitialization>
    {
        MultiplayerManagedInitialization() = default;

        bool ManagedInitializationSet();
        winrt::Windows::Foundation::TimeSpan JoinTimeout();
        winrt::Windows::Foundation::TimeSpan MeasurementTimeout();
        winrt::Windows::Foundation::TimeSpan EvaluationTimeout();
        bool AutoEvaluate();
        uint32_t MembersNeededToStart();
    };
}
