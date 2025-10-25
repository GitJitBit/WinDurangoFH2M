#include "pch.h"
#include "Windows.Kinect.Body.h"
#include "Windows.Kinect.Body.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    int32_t Body::JointCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void Body::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::JointType, winrt::Windows::Kinect::Joint> Body::Joints()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::JointType, winrt::Windows::Kinect::JointOrientation> Body::JointOrientations()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DetectionResult Body::Engaged()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Expression, winrt::Windows::Kinect::DetectionResult> Body::Expressions()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Activity, winrt::Windows::Kinect::DetectionResult> Body::Activities()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Appearance, winrt::Windows::Kinect::DetectionResult> Body::Appearance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::HandState Body::HandLeftState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingConfidence Body::HandLeftConfidence()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::HandState Body::HandRightState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingConfidence Body::HandRightConfidence()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameEdges Body::ClippedEdges()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t Body::TrackingId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool Body::IsTracked()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Point Body::Lean()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::TrackingState Body::LeanTrackingState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
