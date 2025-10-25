#include "pch.h"
#include "Windows.Kinect.ColorFrameSource.h"
#include "Windows.Kinect.ColorFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token ColorFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::ColorFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ColorFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ColorFrameSource::IsActive()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameReader ColorFrameSource::OpenReader()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrameSource::CreateFrameDescription(winrt::Windows::Kinect::ColorImageFormat const& format)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrameSource::FrameDescription()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor ColorFrameSource::KinectSensor()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
