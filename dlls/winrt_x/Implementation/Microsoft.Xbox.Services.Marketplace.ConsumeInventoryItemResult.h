#pragma once
#include "Microsoft.Xbox.Services.Marketplace.ConsumeInventoryItemResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct ConsumeInventoryItemResult : ConsumeInventoryItemResultT<ConsumeInventoryItemResult>
    {
        ConsumeInventoryItemResult() = default;

        winrt::Windows::Foundation::Uri ConsumableUrl();
        uint32_t ConsumableBalance();
        hstring TransactionId();
    };
}
