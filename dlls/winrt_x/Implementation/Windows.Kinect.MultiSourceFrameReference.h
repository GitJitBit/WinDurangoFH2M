#pragma once
#include "Windows.Kinect.MultiSourceFrameReference.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct MultiSourceFrameReference : MultiSourceFrameReferenceT<MultiSourceFrameReference>
    {
        MultiSourceFrameReference() = default;

        winrt::Windows::Kinect::MultiSourceFrame AcquireFrame();
    };
}
