#pragma once
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct BrowseCatalogResult : BrowseCatalogResultT<BrowseCatalogResult>
    {
        BrowseCatalogResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItem> Items();
        uint32_t TotalCount();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::BrowseCatalogResult> GetNextAsync(uint32_t maxItems);
        bool HasNext();
    };
}
