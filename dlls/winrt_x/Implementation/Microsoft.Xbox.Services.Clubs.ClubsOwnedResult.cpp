#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsOwnedResult.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsOwnedResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubsOwnedResult::ClubIds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ClubsOwnedResult::RemainingClubs()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
