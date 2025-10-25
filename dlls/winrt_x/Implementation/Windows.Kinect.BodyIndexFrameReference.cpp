#include "pch.h"
#include "Windows.Kinect.BodyIndexFrameReference.h"
#include "Windows.Kinect.BodyIndexFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::BodyIndexFrame BodyIndexFrameReference::AcquireFrame()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan BodyIndexFrameReference::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
