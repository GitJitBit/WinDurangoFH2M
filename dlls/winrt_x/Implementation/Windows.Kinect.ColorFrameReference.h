#pragma once
#include "Windows.Kinect.ColorFrameReference.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct ColorFrameReference : ColorFrameReferenceT<ColorFrameReference>
    {
        ColorFrameReference() = default;

        winrt::Windows::Kinect::ColorFrame AcquireFrame();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
    };
}
