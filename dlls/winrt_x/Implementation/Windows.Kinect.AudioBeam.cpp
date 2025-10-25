#include "pch.h"
#include "Windows.Kinect.AudioBeam.h"
#include "Windows.Kinect.AudioBeam.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::AudioSource AudioBeam::AudioSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeamMode AudioBeam::AudioBeamMode()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void AudioBeam::AudioBeamMode(winrt::Windows::Kinect::AudioBeamMode const& audioBeamMode)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    float AudioBeam::BeamAngle()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void AudioBeam::BeamAngle(float beamAngle)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    float AudioBeam::BeamAngleConfidence()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeam::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IInputStream AudioBeam::OpenInputStream()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
