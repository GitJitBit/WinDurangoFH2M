#pragma once
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemImage.g.h"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct CatalogItemImage : CatalogItemImageT<CatalogItemImage>
    {
        CatalogItemImage() = default;

        hstring Id();
        winrt::Windows::Foundation::Uri ResizeUrl();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> Purposes();
        hstring Purpose();
        uint32_t Height();
        uint32_t Width();
    };
}
