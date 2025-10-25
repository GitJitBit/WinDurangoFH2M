#pragma once
#include "Windows.Kinect.ColorFrameArrivedEventArgs.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct ColorFrameArrivedEventArgs : ColorFrameArrivedEventArgsT<ColorFrameArrivedEventArgs>
    {
        ColorFrameArrivedEventArgs() = default;

        winrt::Windows::Kinect::ColorFrameReference FrameReference();
    };
}
