#pragma once
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct QualityOfServiceMeasurement : QualityOfServiceMeasurementT<QualityOfServiceMeasurement>
    {
        QualityOfServiceMeasurement() = default;

        winrt::Windows::Xbox::Networking::QualityOfServiceMeasurementStatus Status();
        winrt::Windows::Xbox::Networking::QualityOfServiceMetric Metric();
        winrt::Windows::Foundation::IPropertyValue MetricValue();
        winrt::Windows::Xbox::Networking::SecureDeviceAddress SecureDeviceAddress();
    };
}
