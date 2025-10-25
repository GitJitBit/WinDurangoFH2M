#pragma once
#include "Windows.Xbox.Management.Deployment.ContentInstallationInfo.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentInstallationInfo : ContentInstallationInfoT<ContentInstallationInfo>
    {
        ContentInstallationInfo() = default;

        ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, winrt::guid const& contentId, hstring const& packageFamilyName, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Xbox::Management::Deployment::ConsoleGeneration const& generation, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata);
        ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, winrt::guid const& contentId, hstring const& packageFamilyName, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata);
        hstring Path();
        winrt::guid ContentId();
        winrt::Windows::Xbox::Management::Deployment::IContentMetadata Metadata();
        hstring OneStoreProductId();
        hstring PackageFamilyName();
        bool InstallByDefault();
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentInstallationInfo : ContentInstallationInfoT<ContentInstallationInfo, implementation::ContentInstallationInfo>
    {
    };
}
