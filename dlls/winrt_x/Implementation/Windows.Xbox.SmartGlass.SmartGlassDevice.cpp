#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDevice.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDevice.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> SmartGlassDevice::CreateFromIdAsync(hstring id)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::SmartGlass::SmartGlassDeviceCollection> SmartGlassDevice::FindAllAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    hstring SmartGlassDevice::Id()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    hstring SmartGlassDevice::DisplayName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassDirectSurface SmartGlassDevice::DirectSurface()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassHtmlSurface SmartGlassDevice::HtmlSurface()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassTextEntrySurface SmartGlassDevice::TextEntrySurface()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::System::User SmartGlassDevice::User()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncAction SmartGlassDevice::SetActiveSurfaceAsync(winrt::Windows::Xbox::SmartGlass::ISmartGlassSurface surface)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::QosMetrics SmartGlassDevice::QosMetrics()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassDevice::QosMetricsChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice, winrt::Windows::Xbox::SmartGlass::QosMetricsChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    void SmartGlassDevice::QosMetricsChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    uint32_t SmartGlassDevice::get_DpiX()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    uint32_t SmartGlassDevice::get_DpiY()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream SmartGlassDevice::AuxiliaryStream()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}