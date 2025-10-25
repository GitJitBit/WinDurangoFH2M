#include "pch.h"
#include "Windows.Kinect.AudioBeamSubFrame.h"
#include "Windows.Kinect.AudioBeamSubFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void AudioBeamSubFrame::Close()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t AudioBeamSubFrame::FrameLengthInBytes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamSubFrame::Duration()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    float AudioBeamSubFrame::BeamAngle()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    float AudioBeamSubFrame::BeamAngleConfidence()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeamMode AudioBeamSubFrame::AudioBeamMode()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamSubFrame::RelativeTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBodyCorrelation> AudioBeamSubFrame::AudioBodyCorrelations()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void AudioBeamSubFrame::CopyFrameDataToArray(array_view<uint8_t> frameData)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void AudioBeamSubFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer AudioBeamSubFrame::LockAudioBuffer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
