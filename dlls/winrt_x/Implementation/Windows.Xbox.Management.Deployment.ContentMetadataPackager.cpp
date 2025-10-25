#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadataPackager.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadataPackager.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Foundation::Collections::PropertySet ContentMetadataPackager::PackageContentMetadata(winrt::guid const& deviceId, winrt::guid const& contentId, hstring const& oneStoreProductId, winrt::Windows::Xbox::Management::Deployment::ContentMetadata const& metadata)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
