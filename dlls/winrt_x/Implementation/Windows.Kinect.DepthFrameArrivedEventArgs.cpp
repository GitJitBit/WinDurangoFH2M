#include "pch.h"
#include "Windows.Kinect.DepthFrameArrivedEventArgs.h"
#include "Windows.Kinect.DepthFrameArrivedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::DepthFrameReference DepthFrameArrivedEventArgs::FrameReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
