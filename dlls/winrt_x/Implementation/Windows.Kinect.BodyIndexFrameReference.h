#pragma once
#include "Windows.Kinect.BodyIndexFrameReference.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyIndexFrameReference : BodyIndexFrameReferenceT<BodyIndexFrameReference>
    {
        BodyIndexFrameReference() = default;

        winrt::Windows::Kinect::BodyIndexFrame AcquireFrame();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
    };
}
