#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfoEvents.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfoEvents.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::event_token PackageInfoEvents::PackageChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PackageInfoEvents::PackageChanged(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token PackageInfoEvents::PackageReset(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PackageInfoEvents::PackageReset(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PackageInfoEvents::LogStats()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
