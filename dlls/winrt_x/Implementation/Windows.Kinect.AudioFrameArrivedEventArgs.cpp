#include "pch.h"
#include "Windows.Kinect.AudioFrameArrivedEventArgs.h"
#include "Windows.Kinect.AudioFrameArrivedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::AudioBeamFrameReference AudioFrameArrivedEventArgs::FrameReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
