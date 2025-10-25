#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDeviceWatcher.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDeviceWatcher.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    winrt::event_token SmartGlassDeviceWatcher::DeviceAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassDeviceWatcher, winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    void SmartGlassDeviceWatcher::DeviceAdded(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassDeviceWatcher::DeviceRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassDeviceWatcher, winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    void SmartGlassDeviceWatcher::DeviceRemoved(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}