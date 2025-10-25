#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentLocation.h"
#include "Windows.Xbox.Management.Deployment.ContentLocation.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentLocation::ContentLocation(hstring const& path)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> ContentLocation::InstallationInfos()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IContentMetadata ContentLocation::BundleMetadata()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo ContentLocation::DefaultInstallationInfo()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::ContentLocationContentType ContentLocation::ContentType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ContentLocation::DiscNumber()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ContentLocation::DiscCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ContentLocation::DiscSetId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ContentLocation::PackageTitles()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> ContentLocation::HiddenInstallationInfos()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
