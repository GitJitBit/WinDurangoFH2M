#pragma once
#include "Windows.Kinect.MultiSourceFrameArrivedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct MultiSourceFrameArrivedEventArgs : MultiSourceFrameArrivedEventArgsT<MultiSourceFrameArrivedEventArgs>
    {
        MultiSourceFrameArrivedEventArgs() = default;

        winrt::Windows::Kinect::MultiSourceFrameReference FrameReference();
    };
}
