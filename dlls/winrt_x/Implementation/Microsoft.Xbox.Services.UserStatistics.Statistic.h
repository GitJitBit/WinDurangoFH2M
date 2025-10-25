#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.g.h"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct Statistic : StatisticT<Statistic>
    {
        Statistic() = default;

        hstring StatisticName();
        winrt::Windows::Foundation::PropertyType StatisticType();
        hstring Value();
    };
}
