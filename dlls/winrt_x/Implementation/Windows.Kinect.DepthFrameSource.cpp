#include "pch.h"
#include "Windows.Kinect.DepthFrameSource.h"
#include "Windows.Kinect.DepthFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token DepthFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::DepthFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void DepthFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool DepthFrameSource::IsActive()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameReader DepthFrameSource::OpenReader()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint16_t DepthFrameSource::DepthMinReliableDistance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint16_t DepthFrameSource::DepthMaxReliableDistance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription DepthFrameSource::FrameDescription()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor DepthFrameSource::KinectSensor()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
