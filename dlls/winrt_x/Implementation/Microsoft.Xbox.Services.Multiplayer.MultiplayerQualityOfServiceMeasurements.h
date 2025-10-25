#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQualityOfServiceMeasurements.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerQualityOfServiceMeasurements : MultiplayerQualityOfServiceMeasurementsT<MultiplayerQualityOfServiceMeasurements>
    {
        MultiplayerQualityOfServiceMeasurements() = default;

        MultiplayerQualityOfServiceMeasurements(hstring const& memberDeviceToken, winrt::Windows::Foundation::TimeSpan const& latency, uint64_t bandwidthDownInKilobitsPerSecond, uint64_t bandwidthUpInKilobitsPerSecond, hstring const& customJson);
        hstring MemberDeviceToken();
        winrt::Windows::Foundation::TimeSpan Latency();
        uint64_t BandwidthDownInKilobitsPerSecond();
        uint64_t BandwidthUpInKilobitsPerSecond();
        hstring CustomJson();
    };
}
namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerQualityOfServiceMeasurements : MultiplayerQualityOfServiceMeasurementsT<MultiplayerQualityOfServiceMeasurements, implementation::MultiplayerQualityOfServiceMeasurements>
    {
    };
}
