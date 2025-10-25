#include "pch.h"
#include "Windows.Kinect.InfraredFrameArrivedEventArgs.h"
#include "Windows.Kinect.InfraredFrameArrivedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::InfraredFrameReference InfraredFrameArrivedEventArgs::FrameReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
