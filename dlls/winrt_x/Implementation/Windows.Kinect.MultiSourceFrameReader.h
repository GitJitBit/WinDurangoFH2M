#pragma once
#include "Windows.Kinect.MultiSourceFrameReader.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct MultiSourceFrameReader : MultiSourceFrameReaderT<MultiSourceFrameReader>
    {
        MultiSourceFrameReader() = default;

        void Close();
        winrt::event_token MultiSourceFrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::MultiSourceFrameReader, winrt::Windows::Kinect::MultiSourceFrameArrivedEventArgs> const& value);
        void MultiSourceFrameArrived(winrt::event_token const& token) noexcept;
        winrt::Windows::Kinect::MultiSourceFrame AcquireLatestFrame();
        winrt::Windows::Kinect::FrameSourceTypes FrameSourceTypes();
        bool IsPaused();
        void IsPaused(bool isPaused);
        winrt::Windows::Kinect::KinectSensor KinectSensor();
    };
}
