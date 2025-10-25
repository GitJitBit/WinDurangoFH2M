#include "pch.h"
#include "Windows.Kinect.DepthFrame.h"
#include "Windows.Kinect.DepthFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void DepthFrame::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void DepthFrame::CopyFrameDataToArray(array_view<uint16_t> frameData)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void DepthFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer DepthFrame::LockImageBuffer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription DepthFrame::FrameDescription()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan DepthFrame::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameSource DepthFrame::DepthFrameSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint16_t DepthFrame::DepthMinReliableDistance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint16_t DepthFrame::DepthMaxReliableDistance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
