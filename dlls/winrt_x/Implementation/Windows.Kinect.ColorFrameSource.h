#pragma once
#include "Windows.Kinect.ColorFrameSource.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct ColorFrameSource : ColorFrameSourceT<ColorFrameSource>
    {
        ColorFrameSource() = default;

        winrt::event_token FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::ColorFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value);
        void FrameCaptured(winrt::event_token const& token) noexcept;
        bool IsActive();
        winrt::Windows::Kinect::ColorFrameReader OpenReader();
        winrt::Windows::Kinect::FrameDescription CreateFrameDescription(winrt::Windows::Kinect::ColorImageFormat const& format);
        winrt::Windows::Kinect::FrameDescription FrameDescription();
        winrt::Windows::Kinect::KinectSensor KinectSensor();
    };
}
