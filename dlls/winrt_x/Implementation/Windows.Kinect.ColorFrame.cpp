#include "pch.h"
#include "Windows.Kinect.ColorFrame.h"
#include "Windows.Kinect.ColorFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void ColorFrame::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorImageFormat ColorFrame::RawColorImageFormat()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrame::FrameDescription()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ColorFrame::CopyRawFrameDataToArray(array_view<uint8_t> frameData)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ColorFrame::CopyRawFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer ColorFrame::LockRawImageBuffer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ColorFrame::CopyConvertedFrameDataToArray(array_view<uint8_t> frameData, winrt::Windows::Kinect::ColorImageFormat const& colorFormat)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ColorFrame::CopyConvertedFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Kinect::ColorImageFormat const& colorFormat)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrame::CreateFrameDescription(winrt::Windows::Kinect::ColorImageFormat const& format)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan ColorFrame::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameSource ColorFrame::ColorFrameSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
