#pragma once
#include "Windows.Kinect.BodyFrameReference.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyFrameReference : BodyFrameReferenceT<BodyFrameReference>
    {
        BodyFrameReference() = default;

        winrt::Windows::Kinect::BodyFrame AcquireFrame();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
    };
}
