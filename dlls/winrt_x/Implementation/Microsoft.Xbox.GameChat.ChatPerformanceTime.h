#pragma once
#include "Microsoft.Xbox.GameChat.ChatPerformanceTime.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatPerformanceTime : ChatPerformanceTimeT<ChatPerformanceTime>
    {
        ChatPerformanceTime() = default;

        double MinTimeInMilliseconds();
        double MaxTimeInMilliseconds();
        double AverageTimeInMilliseconds();
    };
}
