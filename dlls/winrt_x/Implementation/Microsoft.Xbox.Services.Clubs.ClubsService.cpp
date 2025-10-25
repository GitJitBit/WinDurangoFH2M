#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsService.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::Club> ClubsService::GetClubAsync(hstring clubId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> ClubsService::GetClubsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> clubIds)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubsOwnedResult> ClubsService::GetClubsOwnedAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::Club> ClubsService::CreateClubAsync(hstring name, winrt::Microsoft::Xbox::Services::Clubs::ClubType type, hstring titleFamilyId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ClubsService::DeleteClubAsync(hstring clubId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> ClubsService::GetClubAssociationsAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club>> ClubsService::GetClubAssociationsAsync(hstring xuid)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRecommendation>> ClubsService::GetClubRecommendationsAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubsSearchResult> ClubsService::SearchClubsAsync(hstring queryString, winrt::Windows::Foundation::Collections::IVectorView<hstring> titleIds, winrt::Windows::Foundation::Collections::IVectorView<hstring> tags)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubSearchAutoComplete>> ClubsService::SuggestClubsAsync(hstring queryString, winrt::Windows::Foundation::Collections::IVectorView<hstring> titleIds, winrt::Windows::Foundation::Collections::IVectorView<hstring> tags)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
