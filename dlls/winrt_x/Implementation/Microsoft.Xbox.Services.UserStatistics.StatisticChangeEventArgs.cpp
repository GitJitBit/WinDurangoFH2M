#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeEventArgs.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring StatisticChangeEventArgs::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring StatisticChangeEventArgs::ServiceConfigurationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::UserStatistics::Statistic StatisticChangeEventArgs::LatestStatistic()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
