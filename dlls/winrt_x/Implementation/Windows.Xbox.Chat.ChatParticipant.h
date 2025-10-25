#pragma once
#include "Windows.Xbox.Chat.ChatParticipant.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatParticipant : ChatParticipantT<ChatParticipant>
    {
        ChatParticipant() = default;

        ChatParticipant(winrt::Windows::Xbox::System::IUser const& user);
        winrt::Windows::Xbox::System::IUser User();
        winrt::Windows::Xbox::Chat::ChatParticipantTypes ParticipantType();
        void ParticipantType(winrt::Windows::Xbox::Chat::ChatParticipantTypes const& value);
        float Volume();
        void Volume(float value);
        void SynthesizeTextMessageAsAudioBuffers(hstring const& message, winrt::Windows::Media::SpeechSynthesis::VoiceInformation const& preferredVoice);
    };
}
namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatParticipant : ChatParticipantT<ChatParticipant, implementation::ChatParticipant>
    {
    };
}
