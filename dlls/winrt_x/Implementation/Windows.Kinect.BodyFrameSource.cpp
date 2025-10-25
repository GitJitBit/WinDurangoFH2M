#include "pch.h"
#include "Windows.Kinect.BodyFrameSource.h"
#include "Windows.Kinect.BodyFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token BodyFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool BodyFrameSource::IsActive()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t BodyFrameSource::BodyCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameReader BodyFrameSource::OpenReader()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor BodyFrameSource::KinectSensor()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyFrameSource::OverrideHandTracking(uint64_t trackingId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyFrameSource::OverrideHandTracking(uint64_t oldTrackingId, uint64_t newTrackingId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
