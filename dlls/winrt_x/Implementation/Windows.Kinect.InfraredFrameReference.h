#pragma once
#include "Windows.Kinect.InfraredFrameReference.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct InfraredFrameReference : InfraredFrameReferenceT<InfraredFrameReference>
    {
        InfraredFrameReference() = default;

        winrt::Windows::Kinect::InfraredFrame AcquireFrame();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
    };
}
