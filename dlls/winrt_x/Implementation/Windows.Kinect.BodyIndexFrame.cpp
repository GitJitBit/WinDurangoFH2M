#include "pch.h"
#include "Windows.Kinect.BodyIndexFrame.h"
#include "Windows.Kinect.BodyIndexFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyIndexFrame::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyIndexFrame::CopyFrameDataToArray(array_view<uint8_t> frameData)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyIndexFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer BodyIndexFrame::LockImageBuffer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription BodyIndexFrame::FrameDescription()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan BodyIndexFrame::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrame::BodyIndexFrameSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
