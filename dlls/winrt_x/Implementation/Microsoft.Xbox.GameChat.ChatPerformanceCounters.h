#pragma once
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatPerformanceCounters : ChatPerformanceCountersT<ChatPerformanceCounters>
    {
        ChatPerformanceCounters() = default;

        winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime CaptureExecutionTime();
        winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime SendExecutionTime();
        winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime RenderExecutionTime();
        winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime AudioThreadExecutionTime();
        winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime AudioThreadPeriodTime();
        winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime IncomingPacketTime();
        double IncomingPacketBandwidthBitsPerSecond();
        double OutgoingPacketBandwidthBitsPerSecond();
    };
}
