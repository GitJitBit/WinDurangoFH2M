#pragma once
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticEvent.g.h"


namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    struct StatisticEvent : StatisticEventT<StatisticEvent>
    {
        StatisticEvent() = default;

        winrt::Windows::Xbox::System::User User();
        winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEventType EventType();
        int32_t ErrorCode();
        hstring ErrorMessage();
        winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEventArgs EventArgs();
    };
}
