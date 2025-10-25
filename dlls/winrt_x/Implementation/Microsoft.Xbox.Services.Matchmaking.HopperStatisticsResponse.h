#pragma once
#include "Microsoft.Xbox.Services.Matchmaking.HopperStatisticsResponse.g.h"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    struct HopperStatisticsResponse : HopperStatisticsResponseT<HopperStatisticsResponse>
    {
        HopperStatisticsResponse() = default;

        hstring HopperName();
        winrt::Windows::Foundation::TimeSpan EstimatedWaitTime();
        uint32_t PlayersWaitingToMatch();
    };
}
