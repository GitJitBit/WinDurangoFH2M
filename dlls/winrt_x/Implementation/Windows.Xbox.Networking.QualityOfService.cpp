#include "pch.h"
#include "Windows.Xbox.Networking.QualityOfService.h"
#include "Windows.Xbox.Networking.QualityOfService.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Networking::MeasureQualityOfServiceResult> QualityOfService::MeasureQualityOfServiceAsync(winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Networking::SecureDeviceAddress> addresses, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> metrics, uint32_t timeoutInMilliseconds, uint32_t numberOfProbes)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void QualityOfService::PublishPrivatePayload(array_view<uint8_t const> payload)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void QualityOfService::ClearPrivatePayload()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void QualityOfService::ConfigureQualityOfService(uint32_t maxSimultaneousProbeConnections, bool constrainSystemBandwidthUp, bool constrainSystemBandwidthDown)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
