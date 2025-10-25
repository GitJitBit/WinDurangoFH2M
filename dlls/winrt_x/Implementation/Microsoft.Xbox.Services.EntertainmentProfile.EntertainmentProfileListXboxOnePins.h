#pragma once
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListXboxOnePins.g.h"


namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    struct EntertainmentProfileListXboxOnePins : EntertainmentProfileListXboxOnePinsT<EntertainmentProfileListXboxOnePins>
    {
        EntertainmentProfileListXboxOnePins() = default;

        winrt::Windows::Foundation::IAsyncAction AddItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType itemType, hstring providerId, hstring provider, winrt::Windows::Foundation::Uri imageUrl, winrt::Windows::Foundation::Uri providerLogoImageUrl, hstring title, hstring subTitle, hstring locale);
        winrt::Windows::Foundation::IAsyncAction RemoveItemAsync(hstring providerId, hstring provider);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListContainsItemResult> ContainsItemAsync(hstring providerId, hstring provider);
    };
}
