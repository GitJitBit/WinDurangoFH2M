#include "pch.h"
#include "Windows.Kinect.InfraredFrameSource.h"
#include "Windows.Kinect.InfraredFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token InfraredFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::InfraredFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InfraredFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool InfraredFrameSource::IsActive()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameReader InfraredFrameSource::OpenReader()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription InfraredFrameSource::FrameDescription()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor InfraredFrameSource::KinectSensor()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
