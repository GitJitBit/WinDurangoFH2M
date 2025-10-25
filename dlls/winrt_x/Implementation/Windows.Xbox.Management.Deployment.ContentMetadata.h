#pragma once
#include "Windows.Xbox.Management.Deployment.ContentMetadata.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentMetadata : ContentMetadataT<ContentMetadata>
    {
        ContentMetadata() = default;

        ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData);
        ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames);
        ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames);
        ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames, winrt::guid const& gameHubId, bool isGameHub);
        hstring Name();
        winrt::guid ProductId();
        winrt::Windows::Foundation::Uri LogoUri();
        winrt::Windows::Foundation::Uri SmallLogoUri();
        winrt::Windows::Foundation::Uri WideLogoUri();
        hstring DownloadUri();
        winrt::Windows::Xbox::Management::Deployment::CatalogType CatalogType();
        uint64_t Size();
        winrt::Windows::Xbox::Management::Deployment::MetadataSource MetadataSource();
        uint32_t TitleId();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> RelatedMedia();
        winrt::Windows::Xbox::ApplicationModel::State::Internal::GameAttributes Attributes();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> RelatedMediaFamilyNames();
        hstring Ratings();
        winrt::guid SiblingId();
        winrt::guid VariantId();
        winrt::guid GameHubId();
        bool IsGameHub();
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentMetadata : ContentMetadataT<ContentMetadata, implementation::ContentMetadata>
    {
    };
}
