#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct StatisticChangeEventArgs : StatisticChangeEventArgsT<StatisticChangeEventArgs>
    {
        StatisticChangeEventArgs() = default;

        hstring XboxUserId();
        hstring ServiceConfigurationId();
        winrt::Microsoft::Xbox::Services::UserStatistics::Statistic LatestStatistic();
    };
}
