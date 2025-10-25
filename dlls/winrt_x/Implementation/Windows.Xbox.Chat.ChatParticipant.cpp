#include "pch.h"
#include "Windows.Xbox.Chat.ChatParticipant.h"
#include "Windows.Xbox.Chat.ChatParticipant.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatParticipant::ChatParticipant(winrt::Windows::Xbox::System::IUser const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::IUser ChatParticipant::User()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatParticipantTypes ChatParticipant::ParticipantType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatParticipant::ParticipantType(winrt::Windows::Xbox::Chat::ChatParticipantTypes const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    float ChatParticipant::Volume()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatParticipant::Volume(float value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatParticipant::SynthesizeTextMessageAsAudioBuffers(hstring const& message, winrt::Windows::Media::SpeechSynthesis::VoiceInformation const& preferredVoice)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
