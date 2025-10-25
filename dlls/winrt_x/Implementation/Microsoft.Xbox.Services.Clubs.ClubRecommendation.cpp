#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRecommendation.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRecommendation.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Microsoft::Xbox::Services::Clubs::Club ClubRecommendation::RecommendedClub()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubRecommendation::Reasons()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
