#pragma once
#include "Windows.Kinect.BodyFrameReader.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyFrameReader : BodyFrameReaderT<BodyFrameReader>
    {
        BodyFrameReader() = default;

        void Close();
        winrt::event_token FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyFrameReader, winrt::Windows::Kinect::BodyFrameArrivedEventArgs> const& value);
        void FrameArrived(winrt::event_token const& token) noexcept;
        winrt::Windows::Kinect::BodyFrame AcquireLatestFrame();
        bool IsPaused();
        void IsPaused(bool isPaused);
        winrt::Windows::Kinect::BodyFrameSource BodyFrameSource();
    };
}
