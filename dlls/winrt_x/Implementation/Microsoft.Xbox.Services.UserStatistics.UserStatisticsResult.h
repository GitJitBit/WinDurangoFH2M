#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsResult.g.h"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct UserStatisticsResult : UserStatisticsResultT<UserStatisticsResult>
    {
        UserStatisticsResult() = default;

        hstring XboxUserId();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::ServiceConfigurationStatistic> ServiceConfigurationStatistics();
    };
}
