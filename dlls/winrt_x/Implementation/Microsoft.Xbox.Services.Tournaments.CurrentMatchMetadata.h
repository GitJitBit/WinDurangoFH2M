#pragma once
#include "Microsoft.Xbox.Services.Tournaments.CurrentMatchMetadata.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct CurrentMatchMetadata : CurrentMatchMetadataT<CurrentMatchMetadata>
    {
        CurrentMatchMetadata() = default;

        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference GameSessionReference();
        winrt::Microsoft::Xbox::Services::Tournaments::MatchMetadata MatchDetails();
    };
}
