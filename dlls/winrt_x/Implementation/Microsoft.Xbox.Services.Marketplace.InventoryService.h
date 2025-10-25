#pragma once
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct InventoryService : InventoryServiceT<InventoryService>
    {
        InventoryService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> GetInventoryItemsForAllUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem> GetInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::ConsumeInventoryItemResult> ConsumeInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem, uint32_t quantityToConsume, hstring transactionId);
    };
}
