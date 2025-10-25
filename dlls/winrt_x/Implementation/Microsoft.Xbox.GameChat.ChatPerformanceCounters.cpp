#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::CaptureExecutionTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::SendExecutionTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::RenderExecutionTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::AudioThreadExecutionTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::AudioThreadPeriodTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::IncomingPacketTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    double ChatPerformanceCounters::IncomingPacketBandwidthBitsPerSecond()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    double ChatPerformanceCounters::OutgoingPacketBandwidthBitsPerSecond()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
