#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubsSearchResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubsSearchResult : ClubsSearchResultT<ClubsSearchResult>
    {
        ClubsSearchResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::Club> Clubs();
        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubSearchFacetResult>> SearchFacetResults();
    };
}
