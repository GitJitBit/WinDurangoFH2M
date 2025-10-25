#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatManagerSettings.h"
#include "Microsoft.Xbox.GameChat.ChatManagerSettings.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    uint32_t ChatManagerSettings::AudioThreadPeriodInMilliseconds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::AudioThreadPeriodInMilliseconds(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ChatManagerSettings::AudioThreadAffinityMask()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::AudioThreadAffinityMask(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t ChatManagerSettings::AudioThreadPriority()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::AudioThreadPriority(int32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::EncodingQuality ChatManagerSettings::AudioEncodingQuality()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::AudioEncodingQuality(winrt::Windows::Xbox::Chat::EncodingQuality const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ChatManagerSettings::JitterBufferMaxPackets()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::JitterBufferMaxPackets(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ChatManagerSettings::JitterBufferLowestNeededPacketCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::JitterBufferLowestNeededPacketCount(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ChatManagerSettings::JitterBufferPacketsBeforeRelaxingNeeded()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::JitterBufferPacketsBeforeRelaxingNeeded(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatManagerSettings::PerformanceCountersEnabled()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::PerformanceCountersEnabled(bool value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }

    bool m_CombineCaptureBuffersIntoSinglePacket;
    bool ChatManagerSettings::CombineCaptureBuffersIntoSinglePacket()
    {
        return m_CombineCaptureBuffersIntoSinglePacket;
    }
    void ChatManagerSettings::CombineCaptureBuffersIntoSinglePacket(bool value)
    {
        m_CombineCaptureBuffersIntoSinglePacket = value;
    }

    bool m_UseKinectAsCaptureSource;
    bool ChatManagerSettings::UseKinectAsCaptureSource()
    {
        return m_UseKinectAsCaptureSource;
    }
    void ChatManagerSettings::UseKinectAsCaptureSource(bool value)
    {
        m_UseKinectAsCaptureSource = value;
    }

    bool m_PreEncodeCallbackEnabled;
    bool ChatManagerSettings::PreEncodeCallbackEnabled()
    {
        return m_PreEncodeCallbackEnabled;
    }
    void ChatManagerSettings::PreEncodeCallbackEnabled(bool value)
    {
        m_PreEncodeCallbackEnabled = value;
    }

    bool m_PostDecodeCallbackEnabled;
    bool ChatManagerSettings::PostDecodeCallbackEnabled()
    {
        return m_PostDecodeCallbackEnabled;
    }
    void ChatManagerSettings::PostDecodeCallbackEnabled(bool value)
    {
        m_PostDecodeCallbackEnabled = value;
    }


    winrt::Microsoft::Xbox::GameChat::GameChatDiagnosticsTraceLevel ChatManagerSettings::DiagnosticsTraceLevel()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::DiagnosticsTraceLevel(winrt::Microsoft::Xbox::GameChat::GameChatDiagnosticsTraceLevel const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatManagerSettings::AutoMuteBadReputationUsers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::AutoMuteBadReputationUsers(bool value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ChatManagerSettings::SessionStateUpdateRequestCoalesceDuration()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::SessionStateUpdateRequestCoalesceDuration(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ChatManagerSettings::MuteUserIfReputationIsBadCoalesceDuration()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatManagerSettings::MuteUserIfReputationIsBadCoalesceDuration(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
