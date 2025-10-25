#pragma once
#include "Windows.Kinect.DepthFrameReference.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct DepthFrameReference : DepthFrameReferenceT<DepthFrameReference>
    {
        DepthFrameReference() = default;

        winrt::Windows::Kinect::DepthFrame AcquireFrame();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
    };
}
