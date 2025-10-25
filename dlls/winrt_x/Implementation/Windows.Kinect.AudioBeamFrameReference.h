#pragma once
#include "Windows.Kinect.AudioBeamFrameReference.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct AudioBeamFrameReference : AudioBeamFrameReferenceT<AudioBeamFrameReference>
    {
        AudioBeamFrameReference() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamFrame> AcquireBeamFrames();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
    };
}
