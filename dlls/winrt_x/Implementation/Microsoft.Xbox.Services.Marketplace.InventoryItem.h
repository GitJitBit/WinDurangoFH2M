#pragma once
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct InventoryItem : InventoryItemT<InventoryItem>
    {
        InventoryItem() = default;

        winrt::Windows::Foundation::Uri Url();
        winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState InventoryItemState();
        winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType MediaItemType();
        hstring ProductId();
        uint32_t TitleId();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> ContainerIds();
        winrt::Windows::Foundation::DateTime RightsObtainedDate();
        winrt::Windows::Foundation::DateTime StartDate();
        winrt::Windows::Foundation::DateTime EndDate();
        winrt::Windows::Foundation::Uri ConsumableUrl();
        uint32_t ConsumableBalance();
        bool IsTrialEntitlement();
        winrt::Windows::Foundation::TimeSpan TrialTimeRemaining();
    };
}
