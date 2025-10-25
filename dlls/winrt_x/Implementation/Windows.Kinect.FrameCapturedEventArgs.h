#pragma once
#include "Windows.Kinect.FrameCapturedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct FrameCapturedEventArgs : FrameCapturedEventArgsT<FrameCapturedEventArgs>
    {
        FrameCapturedEventArgs() = default;

        winrt::Windows::Kinect::FrameSourceTypes FrameType();
        winrt::Windows::Kinect::FrameCapturedStatus FrameStatus();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
    };
}
