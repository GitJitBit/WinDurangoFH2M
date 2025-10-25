#pragma once
#include "Windows.Kinect.Body.g.h"

namespace winrt::Windows::Kinect::implementation
{
    struct Body : BodyT<Body>
    {
        Body() = default;

        static int32_t JointCount();
        void Close();
        winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::JointType, winrt::Windows::Kinect::Joint> Joints();
        winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::JointType, winrt::Windows::Kinect::JointOrientation> JointOrientations();
        winrt::Windows::Kinect::DetectionResult Engaged();
        winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Expression, winrt::Windows::Kinect::DetectionResult> Expressions();
        winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Activity, winrt::Windows::Kinect::DetectionResult> Activities();
        winrt::Windows::Foundation::Collections::IMapView<winrt::Windows::Kinect::Appearance, winrt::Windows::Kinect::DetectionResult> Appearance();
        winrt::Windows::Kinect::HandState HandLeftState();
        winrt::Windows::Kinect::TrackingConfidence HandLeftConfidence();
        winrt::Windows::Kinect::HandState HandRightState();
        winrt::Windows::Kinect::TrackingConfidence HandRightConfidence();
        winrt::Windows::Kinect::FrameEdges ClippedEdges();
        uint64_t TrackingId();
        bool IsTracked();
        winrt::Windows::Foundation::Point Lean();
        winrt::Windows::Kinect::TrackingState LeanTrackingState();
    };
}
namespace winrt::Windows::Kinect::factory_implementation
{
    struct Body : BodyT<Body, implementation::Body>
    {
    };
}
