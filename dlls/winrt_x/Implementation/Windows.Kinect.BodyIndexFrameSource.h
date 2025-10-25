#pragma once
#include "Windows.Kinect.BodyIndexFrameSource.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyIndexFrameSource : BodyIndexFrameSourceT<BodyIndexFrameSource>
    {
        BodyIndexFrameSource() = default;

        winrt::event_token FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyIndexFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value);
        void FrameCaptured(winrt::event_token const& token) noexcept;
        bool IsActive();
        winrt::Windows::Kinect::BodyIndexFrameReader OpenReader();
        winrt::Windows::Kinect::FrameDescription FrameDescription();
        winrt::Windows::Kinect::KinectSensor KinectSensor();
    };
}
