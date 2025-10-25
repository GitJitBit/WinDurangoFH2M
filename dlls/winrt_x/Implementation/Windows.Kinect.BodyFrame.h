#pragma once
#include "Windows.Kinect.BodyFrame.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyFrame : BodyFrameT<BodyFrame>
    {
        BodyFrame() = default;

        void Close();
        void GetAndRefreshBodyData(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Kinect::Body> const& bodies);
        int32_t BodyCount();
        winrt::Windows::Kinect::Vector4 FloorClipPlane();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
        winrt::Windows::Kinect::BodyFrameSource BodyFrameSource();
    };
}
