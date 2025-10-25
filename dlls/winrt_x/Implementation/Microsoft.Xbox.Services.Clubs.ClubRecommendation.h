#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubRecommendation.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubRecommendation : ClubRecommendationT<ClubRecommendation>
    {
        ClubRecommendation() = default;

        winrt::Microsoft::Xbox::Services::Clubs::Club RecommendedClub();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> Reasons();
    };
}
