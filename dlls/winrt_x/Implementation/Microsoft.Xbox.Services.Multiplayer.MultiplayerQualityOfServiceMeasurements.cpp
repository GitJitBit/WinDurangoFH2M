#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQualityOfServiceMeasurements.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQualityOfServiceMeasurements.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerQualityOfServiceMeasurements::MultiplayerQualityOfServiceMeasurements(hstring const& memberDeviceToken, winrt::Windows::Foundation::TimeSpan const& latency, uint64_t bandwidthDownInKilobitsPerSecond, uint64_t bandwidthUpInKilobitsPerSecond, hstring const& customJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerQualityOfServiceMeasurements::MemberDeviceToken()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MultiplayerQualityOfServiceMeasurements::Latency()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerQualityOfServiceMeasurements::BandwidthDownInKilobitsPerSecond()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerQualityOfServiceMeasurements::BandwidthUpInKilobitsPerSecond()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerQualityOfServiceMeasurements::CustomJson()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
