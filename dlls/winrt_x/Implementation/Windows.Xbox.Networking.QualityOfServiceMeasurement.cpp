#include "pch.h"
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.h"
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::QualityOfServiceMeasurementStatus QualityOfServiceMeasurement::Status()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::QualityOfServiceMetric QualityOfServiceMeasurement::Metric()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IPropertyValue QualityOfServiceMeasurement::MetricValue()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAddress QualityOfServiceMeasurement::SecureDeviceAddress()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
