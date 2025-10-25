#pragma once
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemAvailability.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct CatalogItemAvailability : CatalogItemAvailabilityT<CatalogItemAvailability>
    {
        CatalogItemAvailability() = default;

        hstring ContentId();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> AcceptablePaymentInstrumentTypes();
        hstring AvailabilityTitle();
        hstring AvailabilityDescription();
        hstring CurrencyCode();
        hstring DisplayPrice();
        hstring DisplayListPrice();
        hstring DistributionType();
        bool IsPurchasable();
        double ListPrice();
        double Price();
        uint32_t ConsumableQuantity();
        hstring PromotionalText();
        hstring SignedOffer();
        hstring OfferId();
        hstring OfferDisplayDataJson();
    };
}
