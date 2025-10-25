#include "pch.h"
#include "Windows.Kinect.DepthFrameReader.h"
#include "Windows.Kinect.DepthFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void DepthFrameReader::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token DepthFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::DepthFrameReader, winrt::Windows::Kinect::DepthFrameArrivedEventArgs> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void DepthFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrame DepthFrameReader::AcquireLatestFrame()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool DepthFrameReader::IsPaused()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void DepthFrameReader::IsPaused(bool isPaused)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameSource DepthFrameReader::DepthFrameSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
