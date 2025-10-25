#pragma once
#include "Microsoft.Xbox.Services.Marketplace.CatalogItem.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct CatalogItem : CatalogItemT<CatalogItem>
    {
        CatalogItem() = default;

        winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType MediaItemType();
        hstring Id();
        hstring Name();
        hstring ReducedName();
        uint32_t TitleId();
        winrt::Windows::Foundation::DateTime ReleaseDate();
        hstring ProductId();
        hstring SandboxId();
        bool IsBundle();
        bool IsPartOfAnyBundle();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemImage> Images();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> AvailabilityContentIds();
    };
}
