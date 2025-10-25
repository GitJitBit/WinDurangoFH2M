#pragma once
#include "Windows.Kinect.AudioSource.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct AudioSource : AudioSourceT<AudioSource>
    {
        AudioSource() = default;

        winrt::event_token FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::AudioSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value);
        void FrameCaptured(winrt::event_token const& token) noexcept;
        winrt::Windows::Kinect::KinectSensor KinectSensor();
        bool IsActive();
        uint32_t SubFrameLengthInBytes();
        winrt::Windows::Foundation::TimeSpan SubFrameDuration();
        uint32_t MaxSubFrameCount();
        winrt::Windows::Kinect::AudioFrameReader OpenReader();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeam> AudioBeams();
    };
}
