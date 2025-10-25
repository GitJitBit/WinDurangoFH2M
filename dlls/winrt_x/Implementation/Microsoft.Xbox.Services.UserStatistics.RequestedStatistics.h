#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.RequestedStatistics.g.h"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct RequestedStatistics : RequestedStatisticsT<RequestedStatistics>
    {
        RequestedStatistics() = default;

        RequestedStatistics(hstring const& serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& statistics);
        hstring ServiceConfigurationId();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> Statistics();
    };
}
namespace winrt::Microsoft::Xbox::Services::UserStatistics::factory_implementation
{
    struct RequestedStatistics : RequestedStatisticsT<RequestedStatistics, implementation::RequestedStatistics>
    {
    };
}
