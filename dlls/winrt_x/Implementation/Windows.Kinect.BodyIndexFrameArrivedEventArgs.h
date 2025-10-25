#pragma once
#include "Windows.Kinect.BodyIndexFrameArrivedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyIndexFrameArrivedEventArgs : BodyIndexFrameArrivedEventArgsT<BodyIndexFrameArrivedEventArgs>
    {
        BodyIndexFrameArrivedEventArgs() = default;

        winrt::Windows::Kinect::BodyIndexFrameReference FrameReference();
    };
}
