#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToPeerRequirements.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerPeerToPeerRequirements : MultiplayerPeerToPeerRequirementsT<MultiplayerPeerToPeerRequirements>
    {
        MultiplayerPeerToPeerRequirements() = default;

        winrt::Windows::Foundation::TimeSpan LatencyMaximum();
        uint64_t BandwidthMinimumInKilobitsPerSecond();
    };
}
