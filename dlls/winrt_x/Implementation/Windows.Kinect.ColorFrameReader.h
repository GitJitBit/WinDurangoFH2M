#pragma once
#include "Windows.Kinect.ColorFrameReader.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct ColorFrameReader : ColorFrameReaderT<ColorFrameReader>
    {
        ColorFrameReader() = default;

        void Close();
        winrt::event_token FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::ColorFrameReader, winrt::Windows::Kinect::ColorFrameArrivedEventArgs> const& value);
        void FrameArrived(winrt::event_token const& token) noexcept;
        winrt::Windows::Kinect::ColorFrame AcquireLatestFrame();
        bool IsPaused();
        void IsPaused(bool isPaused);
        winrt::Windows::Kinect::ColorFrameSource ColorFrameSource();
    };
}
