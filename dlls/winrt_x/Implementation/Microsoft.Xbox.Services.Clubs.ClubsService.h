#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubsService.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubsService : ClubsServiceT<ClubsService>
    {
        ClubsService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::Club> GetClubAsync(hstring clubId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> GetClubsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> clubIds);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubsOwnedResult> GetClubsOwnedAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::Club> CreateClubAsync(hstring name, winrt::Microsoft::Xbox::Services::Clubs::ClubType type, hstring titleFamilyId);
        winrt::Windows::Foundation::IAsyncAction DeleteClubAsync(hstring clubId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> GetClubAssociationsAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> GetClubAssociationsAsync(hstring xuid);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRecommendation>> GetClubRecommendationsAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubsSearchResult> SearchClubsAsync(hstring queryString, winrt::Windows::Foundation::Collections::IVectorView<hstring> titleIds, winrt::Windows::Foundation::Collections::IVectorView<hstring> tags);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubSearchAutoComplete>> SuggestClubsAsync(hstring queryString, winrt::Windows::Foundation::Collections::IVectorView<hstring> titleIds, winrt::Windows::Foundation::Collections::IVectorView<hstring> tags);
    };
}
