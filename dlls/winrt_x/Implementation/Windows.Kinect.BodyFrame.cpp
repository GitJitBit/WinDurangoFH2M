#include "pch.h"
#include "Windows.Kinect.BodyFrame.h"
#include "Windows.Kinect.BodyFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyFrame::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyFrame::GetAndRefreshBodyData(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Kinect::Body> const& bodies)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t BodyFrame::BodyCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::Vector4 BodyFrame::FloorClipPlane()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan BodyFrame::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameSource BodyFrame::BodyFrameSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
