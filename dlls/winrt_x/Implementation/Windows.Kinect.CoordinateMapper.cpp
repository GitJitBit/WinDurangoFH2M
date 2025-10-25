#include "pch.h"
#include "Windows.Kinect.CoordinateMapper.h"
#include "Windows.Kinect.CoordinateMapper.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::DepthSpacePoint CoordinateMapper::MapCameraPointToDepthSpace(winrt::Windows::Kinect::CameraSpacePoint const& cameraPoint)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorSpacePoint CoordinateMapper::MapCameraPointToColorSpace(winrt::Windows::Kinect::CameraSpacePoint const& cameraPoint)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::CameraSpacePoint CoordinateMapper::MapDepthPointToCameraSpace(winrt::Windows::Kinect::DepthSpacePoint const& depthPoint, uint16_t depth)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorSpacePoint CoordinateMapper::MapDepthPointToColorSpace(winrt::Windows::Kinect::DepthSpacePoint const& depthPoint, uint16_t depth)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void CoordinateMapper::MapDepthFrameToCameraSpace(array_view<uint16_t const> depthFrameData, array_view<winrt::Windows::Kinect::CameraSpacePoint> cameraSpacePoints)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void CoordinateMapper::MapDepthFrameToColorSpace(array_view<uint16_t const> depthFrameData, array_view<winrt::Windows::Kinect::ColorSpacePoint> colorSpacePoints)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void CoordinateMapper::MapDepthFrameToCameraSpaceUsingIBuffer(winrt::Windows::Storage::Streams::IBuffer const& depthFrameData, array_view<winrt::Windows::Kinect::CameraSpacePoint> cameraSpacePoints)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void CoordinateMapper::MapDepthFrameToColorSpaceUsingIBuffer(winrt::Windows::Storage::Streams::IBuffer const& depthFrameData, array_view<winrt::Windows::Kinect::ColorSpacePoint> colorSpacePoints)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void CoordinateMapper::MapColorFrameToDepthSpace(array_view<uint16_t const> depthFrameData, array_view<winrt::Windows::Kinect::DepthSpacePoint> depthSpacePoints)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void CoordinateMapper::MapColorFrameToCameraSpace(array_view<uint16_t const> depthFrameData, array_view<winrt::Windows::Kinect::CameraSpacePoint> cameraSpacePoints)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void CoordinateMapper::MapColorFrameToDepthSpaceUsingIBuffer(winrt::Windows::Storage::Streams::IBuffer const& depthFrameData, array_view<winrt::Windows::Kinect::DepthSpacePoint> depthSpacePoints)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void CoordinateMapper::MapColorFrameToCameraSpaceUsingIBuffer(winrt::Windows::Storage::Streams::IBuffer const& depthFrameData, array_view<winrt::Windows::Kinect::CameraSpacePoint> cameraSpacePoints)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    com_array<winrt::Windows::Foundation::Point> CoordinateMapper::GetDepthFrameToCameraSpaceTable()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
