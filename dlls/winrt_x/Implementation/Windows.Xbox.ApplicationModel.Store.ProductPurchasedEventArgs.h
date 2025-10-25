#pragma once
#include "Windows.Xbox.ApplicationModel.Store.ProductPurchasedEventArgs.g.h"


namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    struct ProductPurchasedEventArgs : ProductPurchasedEventArgsT<ProductPurchasedEventArgs>
    {
        ProductPurchasedEventArgs() = default;

        hstring Receipt();
    };
}
