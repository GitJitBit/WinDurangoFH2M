#pragma once
#include "Windows.Kinect.CoordinateMapper.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct CoordinateMapper : CoordinateMapperT<CoordinateMapper>
    {
        CoordinateMapper() = default;

        winrt::Windows::Kinect::DepthSpacePoint MapCameraPointToDepthSpace(winrt::Windows::Kinect::CameraSpacePoint const& cameraPoint);
        winrt::Windows::Kinect::ColorSpacePoint MapCameraPointToColorSpace(winrt::Windows::Kinect::CameraSpacePoint const& cameraPoint);
        winrt::Windows::Kinect::CameraSpacePoint MapDepthPointToCameraSpace(winrt::Windows::Kinect::DepthSpacePoint const& depthPoint, uint16_t depth);
        winrt::Windows::Kinect::ColorSpacePoint MapDepthPointToColorSpace(winrt::Windows::Kinect::DepthSpacePoint const& depthPoint, uint16_t depth);
        void MapDepthFrameToCameraSpace(array_view<uint16_t const> depthFrameData, array_view<winrt::Windows::Kinect::CameraSpacePoint> cameraSpacePoints);
        void MapDepthFrameToColorSpace(array_view<uint16_t const> depthFrameData, array_view<winrt::Windows::Kinect::ColorSpacePoint> colorSpacePoints);
        void MapDepthFrameToCameraSpaceUsingIBuffer(winrt::Windows::Storage::Streams::IBuffer const& depthFrameData, array_view<winrt::Windows::Kinect::CameraSpacePoint> cameraSpacePoints);
        void MapDepthFrameToColorSpaceUsingIBuffer(winrt::Windows::Storage::Streams::IBuffer const& depthFrameData, array_view<winrt::Windows::Kinect::ColorSpacePoint> colorSpacePoints);
        void MapColorFrameToDepthSpace(array_view<uint16_t const> depthFrameData, array_view<winrt::Windows::Kinect::DepthSpacePoint> depthSpacePoints);
        void MapColorFrameToCameraSpace(array_view<uint16_t const> depthFrameData, array_view<winrt::Windows::Kinect::CameraSpacePoint> cameraSpacePoints);
        void MapColorFrameToDepthSpaceUsingIBuffer(winrt::Windows::Storage::Streams::IBuffer const& depthFrameData, array_view<winrt::Windows::Kinect::DepthSpacePoint> depthSpacePoints);
        void MapColorFrameToCameraSpaceUsingIBuffer(winrt::Windows::Storage::Streams::IBuffer const& depthFrameData, array_view<winrt::Windows::Kinect::CameraSpacePoint> cameraSpacePoints);
        com_array<winrt::Windows::Foundation::Point> GetDepthFrameToCameraSpaceTable();
    };
}
