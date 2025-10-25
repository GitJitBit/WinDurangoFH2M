#pragma once
#include "Windows.Xbox.Networking.MeasureQualityOfServiceResult.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct MeasureQualityOfServiceResult : MeasureQualityOfServiceResultT<MeasureQualityOfServiceResult>
    {
        MeasureQualityOfServiceResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> Measurements();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> GetMeasurementsForDevice(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& address);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> GetMeasurementsForMetric(winrt::Windows::Xbox::Networking::QualityOfServiceMetric const& metric);
        winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement GetMeasurement(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& address, winrt::Windows::Xbox::Networking::QualityOfServiceMetric const& metric);
    };
}
