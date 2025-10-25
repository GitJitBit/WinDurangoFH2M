#pragma once
#include "Windows.Kinect.DepthFrameSource.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct DepthFrameSource : DepthFrameSourceT<DepthFrameSource>
    {
        DepthFrameSource() = default;

        winrt::event_token FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::DepthFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value);
        void FrameCaptured(winrt::event_token const& token) noexcept;
        bool IsActive();
        winrt::Windows::Kinect::DepthFrameReader OpenReader();
        uint16_t DepthMinReliableDistance();
        uint16_t DepthMaxReliableDistance();
        winrt::Windows::Kinect::FrameDescription FrameDescription();
        winrt::Windows::Kinect::KinectSensor KinectSensor();
    };
}
