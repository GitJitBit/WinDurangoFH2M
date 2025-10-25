#pragma once
#include "Windows.Xbox.Management.Deployment.ContentMetadataPackager.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentMetadataPackager : ContentMetadataPackagerT<ContentMetadataPackager>
    {
        ContentMetadataPackager() = default;

        winrt::Windows::Foundation::Collections::PropertySet PackageContentMetadata(winrt::guid const& deviceId, winrt::guid const& contentId, hstring const& oneStoreProductId, winrt::Windows::Xbox::Management::Deployment::ContentMetadata const& metadata);
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentMetadataPackager : ContentMetadataPackagerT<ContentMetadataPackager, implementation::ContentMetadataPackager>
    {
    };
}
