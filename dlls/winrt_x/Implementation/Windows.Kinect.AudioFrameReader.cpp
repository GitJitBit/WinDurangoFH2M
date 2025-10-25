#include "pch.h"
#include "Windows.Kinect.AudioFrameReader.h"
#include "Windows.Kinect.AudioFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void AudioFrameReader::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token AudioFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::AudioFrameReader, winrt::Windows::Kinect::AudioFrameArrivedEventArgs> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void AudioFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamFrame> AudioFrameReader::AcquireLatestBeamFrames()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool AudioFrameReader::IsPaused()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void AudioFrameReader::IsPaused(bool isPaused)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioSource AudioFrameReader::AudioSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
