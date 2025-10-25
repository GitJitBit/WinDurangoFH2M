#pragma once
#include "Windows.Xbox.Management.Deployment.DownloadableContentPackageManager.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct DownloadableContentPackageManager : DownloadableContentPackageManagerT<DownloadableContentPackageManager>
    {
        DownloadableContentPackageManager() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage> FindPackages(winrt::Windows::Xbox::Management::Deployment::InstalledPackagesFilter const& filter);
        winrt::event_token DownloadableContentPackageInstallCompleted(winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler const& handler);
        void DownloadableContentPackageInstallCompleted(winrt::event_token const& eventCookie) noexcept;
        winrt::event_token DownloadableContentPackageInstallCompletedWithDetails(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackageInstallCompletedEventArgs> const& eventHandler);
        void DownloadableContentPackageInstallCompletedWithDetails(winrt::event_token const& eventCookie) noexcept;
    private:
        winrt::event<winrt::Windows::Xbox::Management::Deployment::DownloadableContentPackageInstallCompletedEventHandler> m_downloadableContentPackageInstallCompleted;
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct DownloadableContentPackageManager : DownloadableContentPackageManagerT<DownloadableContentPackageManager, implementation::DownloadableContentPackageManager>
    {
    };
}
