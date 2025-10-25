#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.ServiceConfigurationStatistic.g.h"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct ServiceConfigurationStatistic : ServiceConfigurationStatisticT<ServiceConfigurationStatistic>
    {
        ServiceConfigurationStatistic() = default;

        hstring ServiceConfigurationId();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::Statistic> Statistics();
    };
}
