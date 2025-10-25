#pragma once
#include "Windows.Kinect.InfraredFrameArrivedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct InfraredFrameArrivedEventArgs : InfraredFrameArrivedEventArgsT<InfraredFrameArrivedEventArgs>
    {
        InfraredFrameArrivedEventArgs() = default;

        winrt::Windows::Kinect::InfraredFrameReference FrameReference();
    };
}
