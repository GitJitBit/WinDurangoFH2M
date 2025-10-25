#pragma once
#include "Windows.Kinect.BodyFrameArrivedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyFrameArrivedEventArgs : BodyFrameArrivedEventArgsT<BodyFrameArrivedEventArgs>
    {
        BodyFrameArrivedEventArgs() = default;

        winrt::Windows::Kinect::BodyFrameReference FrameReference();
    };
}
