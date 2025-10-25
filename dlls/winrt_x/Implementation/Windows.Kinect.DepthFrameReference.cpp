#include "pch.h"
#include "Windows.Kinect.DepthFrameReference.h"
#include "Windows.Kinect.DepthFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::DepthFrame DepthFrameReference::AcquireFrame()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan DepthFrameReference::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
