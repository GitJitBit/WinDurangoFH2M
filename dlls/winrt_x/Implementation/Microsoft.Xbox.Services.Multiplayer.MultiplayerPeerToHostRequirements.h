#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToHostRequirements.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerPeerToHostRequirements : MultiplayerPeerToHostRequirementsT<MultiplayerPeerToHostRequirements>
    {
        MultiplayerPeerToHostRequirements() = default;

        winrt::Windows::Foundation::TimeSpan LatencyMaximum();
        uint64_t BandwidthDownMinimumInKilobitsPerSecond();
        uint64_t BandwidthUpMinimumInKilobitsPerSecond();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayMetrics HostSelectionMetric();
    };
}
