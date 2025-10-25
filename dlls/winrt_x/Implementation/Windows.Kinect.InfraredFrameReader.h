#pragma once
#include "Windows.Kinect.InfraredFrameReader.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct InfraredFrameReader : InfraredFrameReaderT<InfraredFrameReader>
    {
        InfraredFrameReader() = default;

        void Close();
        winrt::event_token FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::InfraredFrameReader, winrt::Windows::Kinect::InfraredFrameArrivedEventArgs> const& value);
        void FrameArrived(winrt::event_token const& token) noexcept;
        winrt::Windows::Kinect::InfraredFrame AcquireLatestFrame();
        bool IsPaused();
        void IsPaused(bool isPaused);
        winrt::Windows::Kinect::InfraredFrameSource InfraredFrameSource();
    };
}
