#pragma once
#include "Windows.Kinect.DepthFrameArrivedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct DepthFrameArrivedEventArgs : DepthFrameArrivedEventArgsT<DepthFrameArrivedEventArgs>
    {
        DepthFrameArrivedEventArgs() = default;

        winrt::Windows::Kinect::DepthFrameReference FrameReference();
    };
}
