#pragma once
#include "Windows.Kinect.ColorFrame.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct ColorFrame : ColorFrameT<ColorFrame>
    {
        ColorFrame() = default;

        void Close();
        winrt::Windows::Kinect::ColorImageFormat RawColorImageFormat();
        winrt::Windows::Kinect::FrameDescription FrameDescription();
        void CopyRawFrameDataToArray(array_view<uint8_t> frameData);
        void CopyRawFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer);
        winrt::Windows::Storage::Streams::IBuffer LockRawImageBuffer();
        void CopyConvertedFrameDataToArray(array_view<uint8_t> frameData, winrt::Windows::Kinect::ColorImageFormat const& colorFormat);
        void CopyConvertedFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Kinect::ColorImageFormat const& colorFormat);
        winrt::Windows::Kinect::FrameDescription CreateFrameDescription(winrt::Windows::Kinect::ColorImageFormat const& format);
        winrt::Windows::Foundation::TimeSpan RelativeTime();
        winrt::Windows::Kinect::ColorFrameSource ColorFrameSource();
    };
}
