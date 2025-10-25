#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.ServiceConfigurationStatistic.h"
#include "Microsoft.Xbox.Services.UserStatistics.ServiceConfigurationStatistic.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring ServiceConfigurationStatistic::ServiceConfigurationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::Statistic> ServiceConfigurationStatistic::Statistics()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
