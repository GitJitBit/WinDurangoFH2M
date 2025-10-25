#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDeviceCollection.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDeviceCollection.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> SmartGlassDeviceCollection::First()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassDevice SmartGlassDeviceCollection::GetAt(uint32_t index)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    uint32_t SmartGlassDeviceCollection::Size()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    bool SmartGlassDeviceCollection::IndexOf(winrt::Windows::Xbox::SmartGlass::SmartGlassDevice const& value, uint32_t& index)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    uint32_t SmartGlassDeviceCollection::GetMany(uint32_t startIndex, array_view<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> items)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}