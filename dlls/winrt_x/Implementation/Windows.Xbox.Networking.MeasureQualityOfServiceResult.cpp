#include "pch.h"
#include "Windows.Xbox.Networking.MeasureQualityOfServiceResult.h"
#include "Windows.Xbox.Networking.MeasureQualityOfServiceResult.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> MeasureQualityOfServiceResult::Measurements()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> MeasureQualityOfServiceResult::GetMeasurementsForDevice(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& address)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement> MeasureQualityOfServiceResult::GetMeasurementsForMetric(winrt::Windows::Xbox::Networking::QualityOfServiceMetric const& metric)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::QualityOfServiceMeasurement MeasureQualityOfServiceResult::GetMeasurement(winrt::Windows::Xbox::Networking::SecureDeviceAddress const& address, winrt::Windows::Xbox::Networking::QualityOfServiceMetric const& metric)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
