#pragma once
#include "Windows.Kinect.BodyIndexFrame.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct BodyIndexFrame : BodyIndexFrameT<BodyIndexFrame>
    {
        BodyIndexFrame() = default;

        void Close();
        void CopyFrameDataToArray(array_view<uint8_t> frameData);
        void CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer);
        winrt::Windows::Storage::Streams::IBuffer LockImageBuffer();
        winrt::Windows::Kinect::FrameDescription FrameDescription();
        winrt::Windows::Foundation::TimeSpan RelativeTime();
        winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrameSource();
    };
}
