#include "pch.h"
#include "Windows.Kinect.ColorFrameArrivedEventArgs.h"
#include "Windows.Kinect.ColorFrameArrivedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::ColorFrameReference ColorFrameArrivedEventArgs::FrameReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
