#pragma once
#include "Microsoft.Xbox.Services.Marketplace.CatalogService.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct CatalogService : CatalogServiceT<CatalogService>
    {
        CatalogService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::BrowseCatalogResult> BrowseCatalogAsync(hstring parentId, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType parentMediaType, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType childMediaType, winrt::Microsoft::Xbox::Services::Marketplace::CatalogSortOrder orderBy, uint32_t skipItems, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::BrowseCatalogResult> BrowseCatalogBundlesAsync(hstring parentId, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType parentMediaType, hstring productId, winrt::Microsoft::Xbox::Services::Marketplace::BundleRelationshipType relationship, uint32_t skipItems, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails>> GetCatalogItemDetailsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds);
    };
}
