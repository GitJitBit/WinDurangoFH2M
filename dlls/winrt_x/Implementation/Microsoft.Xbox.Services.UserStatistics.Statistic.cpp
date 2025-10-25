#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.h"
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring Statistic::StatisticName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::PropertyType Statistic::StatisticType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Statistic::Value()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
