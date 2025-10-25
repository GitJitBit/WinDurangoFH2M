#pragma once
#include "Windows.Kinect.KinectSensor.g.h"


namespace winrt::Windows::Kinect::implementation
{
    struct KinectSensor : KinectSensorT<KinectSensor>
    {
        KinectSensor() = default;

        static winrt::Windows::Kinect::KinectSensor GetDefault();
        static winrt::Windows::Foundation::Collections::IObservableMap<hstring, winrt::Windows::Kinect::KinectSensor> Sensors();
        winrt::event_token IsPausedChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::KinectSensor, winrt::Windows::Kinect::IsPausedChangedEventArgs> const& value);
        void IsPausedChanged(winrt::event_token const& token) noexcept;
        void Open();
        void Close();
        bool IsOpen();
        bool IsPaused();
        winrt::Windows::Kinect::ColorFrameSource ColorFrameSource();
        winrt::Windows::Kinect::DepthFrameSource DepthFrameSource();
        winrt::Windows::Kinect::BodyFrameSource BodyFrameSource();
        winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrameSource();
        winrt::Windows::Kinect::InfraredFrameSource InfraredFrameSource();
        winrt::Windows::Kinect::AudioSource AudioSource();
        winrt::Windows::Kinect::MultiSourceFrameReader OpenMultiSourceFrameReader(winrt::Windows::Kinect::FrameSourceTypes const& enabledFrameSourceTypes);
        winrt::Windows::Kinect::CoordinateMapper CoordinateMapper();
        hstring UniqueKinectId();
    };
}
namespace winrt::Windows::Kinect::factory_implementation
{
    struct KinectSensor : KinectSensorT<KinectSensor, implementation::KinectSensor>
    {
    };
}
