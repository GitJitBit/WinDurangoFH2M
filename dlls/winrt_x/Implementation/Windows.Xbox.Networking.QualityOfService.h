#pragma once
#include "Windows.Xbox.Networking.QualityOfService.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct QualityOfService
    {
        QualityOfService() = default;

        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::MeasureQualityOfServiceResult> MeasureQualityOfServiceAsync(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Networking::SecureDeviceAddress> addresses, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> metrics, uint32_t timeoutInMilliseconds, uint32_t numberOfProbes);
        static void PublishPrivatePayload(array_view<uint8_t const> payload);
        static void ClearPrivatePayload();
        static void ConfigureQualityOfService(uint32_t maxSimultaneousProbeConnections, bool constrainSystemBandwidthUp, bool constrainSystemBandwidthDown);
    };
}
namespace winrt::Windows::Xbox::Networking::factory_implementation
{
    struct QualityOfService : QualityOfServiceT<QualityOfService, implementation::QualityOfService>
    {
    };
}
