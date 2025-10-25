#pragma once
#include "Windows.Kinect.AudioFrameArrivedEventArgs.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct AudioFrameArrivedEventArgs : AudioFrameArrivedEventArgsT<AudioFrameArrivedEventArgs>
    {
        AudioFrameArrivedEventArgs() = default;

        winrt::Windows::Kinect::AudioBeamFrameReference FrameReference();
    };
}
