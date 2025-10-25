#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubSearchFacetResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubSearchFacetResult : ClubSearchFacetResultT<ClubSearchFacetResult>
    {
        ClubSearchFacetResult() = default;

        hstring Value();
        uint32_t Count();
    };
}
