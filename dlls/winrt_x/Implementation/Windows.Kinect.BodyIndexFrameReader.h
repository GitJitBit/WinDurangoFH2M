#pragma once
#include "Windows.Kinect.BodyIndexFrameReader.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyIndexFrameReader : BodyIndexFrameReaderT<BodyIndexFrameReader>
    {
        BodyIndexFrameReader() = default;

        void Close();
        winrt::event_token FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyIndexFrameReader, winrt::Windows::Kinect::BodyIndexFrameArrivedEventArgs> const& value);
        void FrameArrived(winrt::event_token const& token) noexcept;
        winrt::Windows::Kinect::BodyIndexFrame AcquireLatestFrame();
        bool IsPaused();
        void IsPaused(bool isPaused);
        winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrameSource();
    };
}
