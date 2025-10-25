#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubsOwnedResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubsOwnedResult : ClubsOwnedResultT<ClubsOwnedResult>
    {
        ClubsOwnedResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubIds();
        uint32_t RemainingClubs();
    };
}
