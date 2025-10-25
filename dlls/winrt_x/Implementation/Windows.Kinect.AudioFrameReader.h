#pragma once
#include "Windows.Kinect.AudioFrameReader.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct AudioFrameReader : AudioFrameReaderT<AudioFrameReader>
    {
        AudioFrameReader() = default;

        void Close();
        winrt::event_token FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::AudioFrameReader, winrt::Windows::Kinect::AudioFrameArrivedEventArgs> const& value);
        void FrameArrived(winrt::event_token const& token) noexcept;
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamFrame> AcquireLatestBeamFrames();
        bool IsPaused();
        void IsPaused(bool isPaused);
        winrt::Windows::Kinect::AudioSource AudioSource();
    };
}
