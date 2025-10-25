#pragma once
#include "Windows.Xbox.Management.Deployment.ContentLocation.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentLocation : ContentLocationT<ContentLocation>
    {
        ContentLocation() = default;

        ContentLocation(hstring const& path);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> InstallationInfos();
        winrt::Windows::Xbox::Management::Deployment::IContentMetadata BundleMetadata();
        winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo DefaultInstallationInfo();
        winrt::Windows::Xbox::Management::Deployment::ContentLocationContentType ContentType();
        uint32_t DiscNumber();
        uint32_t DiscCount();
        hstring DiscSetId();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> PackageTitles();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> HiddenInstallationInfos();
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentLocation : ContentLocationT<ContentLocation, implementation::ContentLocation>
    {
    };
}
