#include "pch.h"
#include "Windows.Kinect.FrameCapturedEventArgs.h"
#include "Windows.Kinect.FrameCapturedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::FrameSourceTypes FrameCapturedEventArgs::FrameType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameCapturedStatus FrameCapturedEventArgs::FrameStatus()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan FrameCapturedEventArgs::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
