#pragma once
#include "Windows.Kinect.AudioBeam.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct AudioBeam : AudioBeamT<AudioBeam>
    {
        AudioBeam() = default;

        winrt::Windows::Kinect::AudioSource AudioSource();
        winrt::Windows::Kinect::AudioBeamMode AudioBeamMode();
        void AudioBeamMode(winrt::Windows::Kinect::AudioBeamMode const& audioBeamMode);
        float BeamAngle();
        void BeamAngle(float beamAngle);
        float BeamAngleConfidence();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
        winrt::Windows::Storage::Streams::IInputStream OpenInputStream();
    };
}
