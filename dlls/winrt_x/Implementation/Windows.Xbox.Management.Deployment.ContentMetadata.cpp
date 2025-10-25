#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadata.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadata.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    ContentMetadata::ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames, winrt::guid const& gameHubId, bool isGameHub)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ContentMetadata::Name()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::ProductId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::LogoUri()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::SmallLogoUri()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri ContentMetadata::WideLogoUri()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ContentMetadata::DownloadUri()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::CatalogType ContentMetadata::CatalogType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t ContentMetadata::Size()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::MetadataSource ContentMetadata::MetadataSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ContentMetadata::TitleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> ContentMetadata::RelatedMedia()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::GameAttributes ContentMetadata::Attributes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ContentMetadata::RelatedMediaFamilyNames()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ContentMetadata::Ratings()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::SiblingId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::VariantId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::guid ContentMetadata::GameHubId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ContentMetadata::IsGameHub()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
