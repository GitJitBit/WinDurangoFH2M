#pragma once
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct InventoryItemsResult : InventoryItemsResultT<InventoryItemsResult>
    {
        InventoryItemsResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem> Items();
        uint32_t TotalItems();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetNextAsync(uint32_t maxItems);
        bool HasNext();
    };
}
