#pragma once
#include "Windows.Kinect.MultiSourceFrame.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct MultiSourceFrame : MultiSourceFrameT<MultiSourceFrame>
    {
        MultiSourceFrame() = default;

        void Close();
        winrt::Windows::Kinect::ColorFrameReference ColorFrameReference();
        winrt::Windows::Kinect::DepthFrameReference DepthFrameReference();
        winrt::Windows::Kinect::BodyFrameReference BodyFrameReference();
        winrt::Windows::Kinect::BodyIndexFrameReference BodyIndexFrameReference();
        winrt::Windows::Kinect::InfraredFrameReference InfraredFrameReference();
    };
}
