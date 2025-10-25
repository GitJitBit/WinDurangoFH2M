#include "pch.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListXboxOnePins.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListXboxOnePins.g.cpp"


namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    winrt::Windows::Foundation::IAsyncAction EntertainmentProfileListXboxOnePins::AddItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType itemType, hstring providerId, hstring provider, winrt::Windows::Foundation::Uri imageUrl, winrt::Windows::Foundation::Uri providerLogoImageUrl, hstring title, hstring subTitle, hstring locale)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction EntertainmentProfileListXboxOnePins::RemoveItemAsync(hstring providerId, hstring provider)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListContainsItemResult> EntertainmentProfileListXboxOnePins::ContainsItemAsync(hstring providerId, hstring provider)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
