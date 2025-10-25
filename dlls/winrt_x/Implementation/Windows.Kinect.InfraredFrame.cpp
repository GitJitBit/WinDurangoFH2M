#include "pch.h"
#include "Windows.Kinect.InfraredFrame.h"
#include "Windows.Kinect.InfraredFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void InfraredFrame::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InfraredFrame::CopyFrameDataToArray(array_view<uint16_t> frameData)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void InfraredFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer InfraredFrame::LockImageBuffer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription InfraredFrame::FrameDescription()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan InfraredFrame::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameSource InfraredFrame::InfraredFrameSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
