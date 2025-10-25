#include "pch.h"
#include "Windows.Kinect.ColorFrameReader.h"
#include "Windows.Kinect.ColorFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void ColorFrameReader::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token ColorFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::ColorFrameReader, winrt::Windows::Kinect::ColorFrameArrivedEventArgs> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ColorFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrame ColorFrameReader::AcquireLatestFrame()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ColorFrameReader::IsPaused()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ColorFrameReader::IsPaused(bool isPaused)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameSource ColorFrameReader::ColorFrameSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
