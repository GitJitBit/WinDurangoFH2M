#pragma once
#include "Windows.Kinect.BodyFrameSource.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyFrameSource : BodyFrameSourceT<BodyFrameSource>
    {
        BodyFrameSource() = default;

        winrt::event_token FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value);
        void FrameCaptured(winrt::event_token const& token) noexcept;
        bool IsActive();
        int32_t BodyCount();
        winrt::Windows::Kinect::BodyFrameReader OpenReader();
        winrt::Windows::Kinect::KinectSensor KinectSensor();
        void OverrideHandTracking(uint64_t trackingId);
        void OverrideHandTracking(uint64_t oldTrackingId, uint64_t newTrackingId);
    };
}
