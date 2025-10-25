#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassSensors.h"
#include "Windows.Xbox.SmartGlass.SmartGlassSensors.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    winrt::Windows::Devices::Sensors::Accelerometer SmartGlassSensors::Accelerometer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Compass SmartGlassSensors::Compass()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Gyrometer SmartGlassSensors::Gyrometer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::Inclinometer SmartGlassSensors::Inclinometer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Devices::Sensors::OrientationSensor SmartGlassSensors::OrientationSensor()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}