#pragma once
#include "Windows.Kinect.InfraredFrameSource.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct InfraredFrameSource : InfraredFrameSourceT<InfraredFrameSource>
    {
        InfraredFrameSource() = default;

        winrt::event_token FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::InfraredFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value);
        void FrameCaptured(winrt::event_token const& token) noexcept;
        bool IsActive();
        winrt::Windows::Kinect::InfraredFrameReader OpenReader();
        winrt::Windows::Kinect::FrameDescription FrameDescription();
        winrt::Windows::Kinect::KinectSensor KinectSensor();
    };
}
