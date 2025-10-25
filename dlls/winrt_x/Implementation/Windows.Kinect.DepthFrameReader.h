#pragma once
#include "Windows.Kinect.DepthFrameReader.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct DepthFrameReader : DepthFrameReaderT<DepthFrameReader>
    {
        DepthFrameReader() = default;

        void Close();
        winrt::event_token FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::DepthFrameReader, winrt::Windows::Kinect::DepthFrameArrivedEventArgs> const& value);
        void FrameArrived(winrt::event_token const& token) noexcept;
        winrt::Windows::Kinect::DepthFrame AcquireLatestFrame();
        bool IsPaused();
        void IsPaused(bool isPaused);
        winrt::Windows::Kinect::DepthFrameSource DepthFrameSource();
    };
}
