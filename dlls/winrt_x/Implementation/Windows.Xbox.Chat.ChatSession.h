#pragma once
#include "Windows.Xbox.Chat.ChatSession.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatSession : ChatSessionT<ChatSession>
    {
        ChatSession() = default;

        ChatSession(winrt::Windows::Foundation::TimeSpan const& period, winrt::Windows::Xbox::Chat::ChatFeatures const& enabledFeatures);
        ChatSession(winrt::Windows::Foundation::TimeSpan const& period, uint32_t processorAffinity, winrt::Windows::Xbox::Chat::ChatFeatures const& enabledFeatures);
        winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Chat::IChatChannel> Channels();
        winrt::event_token StateChangedEvent(winrt::Windows::Xbox::Chat::ChatSessionStateChangedHandler const& handler);
        void StateChangedEvent(winrt::event_token const& cookie) noexcept;
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Chat::IChatSessionState> GetStateAsync();
        void TranscriptionEnabled(int32_t value);
        int32_t TranscriptionEnabled();
        winrt::Windows::Xbox::Chat::ChatEncoder CreateTranscribingEncoder(winrt::Windows::Xbox::Chat::IChatParticipant const& participant, winrt::Windows::Xbox::Chat::IFormat const& sourceFormat, winrt::Windows::Xbox::Chat::EncodingQuality const& quality);
        winrt::event_token TranscribedTextReadyEvent(winrt::Windows::Xbox::Chat::ChatParticipantTranscribedTextReadyHandler const& handler);
        void TranscribedTextReadyEvent(winrt::event_token const& cookie) noexcept;
        winrt::Windows::Xbox::Chat::ChatRestriction GetParticipantRelationship(winrt::Windows::Xbox::Chat::IChatParticipant const& sourceParticipant, winrt::Windows::Xbox::Chat::IChatParticipant const& targetParticipant);
        winrt::Windows::Xbox::System::IAudioDeviceInfo GetDedicatedSynthesisDevice(winrt::Windows::Xbox::Chat::IChatParticipant const& participant);
    };
}
namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatSession : ChatSessionT<ChatSession, implementation::ChatSession>
    {
    };
}
