#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerMemberInitialization.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerMemberInitialization : MultiplayerMemberInitializationT<MultiplayerMemberInitialization>
    {
        MultiplayerMemberInitialization() = default;

        bool MemberInitializationSet();
        winrt::Windows::Foundation::TimeSpan JoinTimeout();
        winrt::Windows::Foundation::TimeSpan MeasurementTimeout();
        winrt::Windows::Foundation::TimeSpan EvaluationTimeout();
        bool ExternalEvaluation();
        uint32_t MembersNeededToStart();
    };
}
