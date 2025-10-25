#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamInfo : TeamInfoT<TeamInfo>
    {
        TeamInfo() = default;

        hstring Id();
        hstring Name();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> MemberXboxUserIds();
        winrt::Windows::Foundation::DateTime RegistrationDate();
        hstring Standing();
        winrt::Microsoft::Xbox::Services::Tournaments::TeamState TeamState();
        winrt::Microsoft::Xbox::Services::Tournaments::TeamCompletedReason CompletedReason();
        uint64_t Ranking();
        hstring ContinuationUri();
        winrt::Microsoft::Xbox::Services::Tournaments::CurrentMatchMetadata CurrentMatchMetadata();
        winrt::Microsoft::Xbox::Services::Tournaments::PreviousMatchMetadata PreviousMatchMetadata();
    };
}
