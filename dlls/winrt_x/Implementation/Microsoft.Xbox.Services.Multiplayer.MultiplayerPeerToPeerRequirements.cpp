#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToPeerRequirements.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToPeerRequirements.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::TimeSpan MultiplayerPeerToPeerRequirements::LatencyMaximum()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerPeerToPeerRequirements::BandwidthMinimumInKilobitsPerSecond()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
