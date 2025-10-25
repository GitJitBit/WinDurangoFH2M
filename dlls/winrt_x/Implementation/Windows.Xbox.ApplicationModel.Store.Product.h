#pragma once
#include "Windows.Xbox.ApplicationModel.Store.Product.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    struct Product
    {
        Product() = default;

        static winrt::Windows::Foundation::IAsyncAction ShowPurchaseAsync(winrt::Windows::Xbox::System::IUser requestingUser, hstring offer);
        static winrt::Windows::Foundation::IAsyncAction ShowDetailsAsync(winrt::Windows::Xbox::System::IUser requestingUser, hstring productId);
        static winrt::Windows::Foundation::IAsyncAction ShowMarketplaceAsync(winrt::Windows::Xbox::System::IUser requestingUser, winrt::Windows::Xbox::ApplicationModel::Store::ProductItemTypes inputProductItemType, hstring inputProductId, winrt::Windows::Xbox::ApplicationModel::Store::ProductItemTypes resultProductItemTypes);
        static winrt::Windows::Foundation::IAsyncAction ShowRedeemCodeAsync(winrt::Windows::Xbox::System::IUser user, hstring offer);
        static winrt::Windows::Foundation::IAsyncAction ShowSubscriptionAsync(winrt::Windows::Xbox::System::IUser user, hstring productId, uint32_t privilegeId);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> CheckPrivilegeAsync(winrt::Windows::Xbox::System::IUser user, uint32_t privilegeId, bool attemptResolution, hstring friendlyDisplay);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> CheckPrivilegesAsync(winrt::Windows::Xbox::System::IUser user, winrt::Windows::Foundation::Collections::IVectorView<uint32_t> privilegeIds, bool attemptResolution, hstring friendlyDisplay);
        static winrt::event_token ProductPurchased(winrt::Windows::Xbox::ApplicationModel::Store::ProductPurchasedEventHandler const& handler);
        static void ProductPurchased(winrt::event_token const& token) noexcept;
        static winrt::Windows::Foundation::IAsyncAction ShowPurchaseForStoreIdAsync(winrt::Windows::Xbox::System::IUser requestingUser, hstring storeId);
        static winrt::Windows::Foundation::IAsyncAction ShowDetailsForStoreIdAsync(winrt::Windows::Xbox::System::IUser requestingUser, hstring storeId);
        static winrt::Windows::Foundation::IAsyncAction ShowUpsellAsync(winrt::Windows::Xbox::System::IUser requestingUser, uint32_t privilegeId, hstring prioritizedSku, uint32_t upsellEntryPoint, hstring referProductId);
        static winrt::Windows::Foundation::IAsyncAction ShowUpsellThirdPartyNoticeAsync(winrt::Windows::Xbox::System::IUser requestingUser);
    private:
        inline static winrt::event<winrt::Windows::Xbox::ApplicationModel::Store::ProductPurchasedEventHandler> m_productPurchasedEvent;
    };
}
namespace winrt::Windows::Xbox::ApplicationModel::Store::factory_implementation
{
    struct Product : ProductT<Product, implementation::Product>
    {
    };
}
