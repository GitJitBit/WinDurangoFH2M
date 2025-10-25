#pragma once
#include "Microsoft.Xbox.Services.Tournaments.PreviousMatchMetadata.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct PreviousMatchMetadata : PreviousMatchMetadataT<PreviousMatchMetadata>
    {
        PreviousMatchMetadata() = default;

        winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult Result();
        winrt::Windows::Foundation::DateTime EndTime();
        winrt::Microsoft::Xbox::Services::Tournaments::MatchMetadata MatchDetails();
    };
}
