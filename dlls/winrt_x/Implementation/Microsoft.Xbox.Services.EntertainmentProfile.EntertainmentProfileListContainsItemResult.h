#pragma once
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListContainsItemResult.g.h"


namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    struct EntertainmentProfileListContainsItemResult : EntertainmentProfileListContainsItemResultT<EntertainmentProfileListContainsItemResult>
    {
        EntertainmentProfileListContainsItemResult() = default;

        bool IsContained();
        hstring ProviderId();
        hstring Provider();
    };
}
