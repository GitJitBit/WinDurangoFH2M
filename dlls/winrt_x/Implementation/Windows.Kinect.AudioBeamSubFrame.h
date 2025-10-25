#pragma once
#include "Windows.Kinect.AudioBeamSubFrame.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct AudioBeamSubFrame : AudioBeamSubFrameT<AudioBeamSubFrame>
    {
        AudioBeamSubFrame() = default;

        void Close();
        uint32_t FrameLengthInBytes();
        winrt::Windows::Foundation::TimeSpan Duration();
        float BeamAngle();
        float BeamAngleConfidence();
        winrt::Windows::Kinect::AudioBeamMode AudioBeamMode();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBodyCorrelation> AudioBodyCorrelations();
        void CopyFrameDataToArray(array_view<uint8_t> frameData);
        void CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer);
        winrt::Windows::Storage::Streams::IBuffer LockAudioBuffer();
    };
}
