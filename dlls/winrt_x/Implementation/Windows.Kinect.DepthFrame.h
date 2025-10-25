#pragma once
#include "Windows.Kinect.DepthFrame.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct DepthFrame : DepthFrameT<DepthFrame>
    {
        DepthFrame() = default;

        void Close();
        void CopyFrameDataToArray(array_view<uint16_t> frameData);
        void CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer);
        winrt::Windows::Storage::Streams::IBuffer LockImageBuffer();
        winrt::Windows::Kinect::FrameDescription FrameDescription();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
        winrt::Windows::Kinect::DepthFrameSource DepthFrameSource();
        uint16_t DepthMinReliableDistance();
        uint16_t DepthMaxReliableDistance();
    };
}
