#pragma once
#include "Windows.Kinect.AudioBeamFrame.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct AudioBeamFrame : AudioBeamFrameT<AudioBeamFrame>
    {
        AudioBeamFrame() = default;

        void Close();
        winrt::Windows::Kinect::AudioSource AudioSource();
        winrt::Windows::Foundation::TimeSpan Duration();
        winrt::Windows::Foundation::TimeSpan RelativeTimeStart();
        winrt::Windows::Kinect::AudioBeam AudioBeam();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamSubFrame> SubFrames();
    };
}
