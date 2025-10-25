#pragma once
#include "Microsoft.Xbox.GameChat.ChatManagerSettings.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatManagerSettings : ChatManagerSettingsT<ChatManagerSettings>
    {
        ChatManagerSettings() = default;

        uint32_t AudioThreadPeriodInMilliseconds();
        void AudioThreadPeriodInMilliseconds(uint32_t value);
        uint32_t AudioThreadAffinityMask();
        void AudioThreadAffinityMask(uint32_t value);
        int32_t AudioThreadPriority();
        void AudioThreadPriority(int32_t value);
        winrt::Windows::Xbox::Chat::EncodingQuality AudioEncodingQuality();
        void AudioEncodingQuality(winrt::Windows::Xbox::Chat::EncodingQuality const& value);
        uint32_t JitterBufferMaxPackets();
        void JitterBufferMaxPackets(uint32_t value);
        uint32_t JitterBufferLowestNeededPacketCount();
        void JitterBufferLowestNeededPacketCount(uint32_t value);
        uint32_t JitterBufferPacketsBeforeRelaxingNeeded();
        void JitterBufferPacketsBeforeRelaxingNeeded(uint32_t value);
        bool PerformanceCountersEnabled();
        void PerformanceCountersEnabled(bool value);
        bool CombineCaptureBuffersIntoSinglePacket();
        void CombineCaptureBuffersIntoSinglePacket(bool value);
        bool UseKinectAsCaptureSource();
        void UseKinectAsCaptureSource(bool value);
        bool PreEncodeCallbackEnabled();
        void PreEncodeCallbackEnabled(bool value);
        bool PostDecodeCallbackEnabled();
        void PostDecodeCallbackEnabled(bool value);
        winrt::Microsoft::Xbox::GameChat::GameChatDiagnosticsTraceLevel DiagnosticsTraceLevel();
        void DiagnosticsTraceLevel(winrt::Microsoft::Xbox::GameChat::GameChatDiagnosticsTraceLevel const& value);
        bool AutoMuteBadReputationUsers();
        void AutoMuteBadReputationUsers(bool value);
        uint32_t SessionStateUpdateRequestCoalesceDuration();
        void SessionStateUpdateRequestCoalesceDuration(uint32_t value);
        uint32_t MuteUserIfReputationIsBadCoalesceDuration();
        void MuteUserIfReputationIsBadCoalesceDuration(uint32_t value);
    };
}
