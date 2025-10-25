#include "pch.h"
#include "Windows.Kinect.MultiSourceFrameReader.h"
#include "Windows.Kinect.MultiSourceFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void MultiSourceFrameReader::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token MultiSourceFrameReader::MultiSourceFrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::MultiSourceFrameReader, winrt::Windows::Kinect::MultiSourceFrameArrivedEventArgs> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiSourceFrameReader::MultiSourceFrameArrived(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::MultiSourceFrame MultiSourceFrameReader::AcquireLatestFrame()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameSourceTypes MultiSourceFrameReader::FrameSourceTypes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool MultiSourceFrameReader::IsPaused()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiSourceFrameReader::IsPaused(bool isPaused)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor MultiSourceFrameReader::KinectSensor()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
