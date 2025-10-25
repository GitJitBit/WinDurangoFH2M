#pragma once
#include "Microsoft.Xbox.GameChat.ChatUser.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatUser : ChatUserT<ChatUser>
    {
        ChatUser() = default;

        hstring XboxUserId();
        winrt::Windows::Foundation::IInspectable UniqueConsoleIdentifier();
        winrt::Microsoft::Xbox::GameChat::ChatUserTalkingMode TalkingMode();
        uint32_t NumberOfPendingAudioPacketsToPlay();
        uint32_t DynamicNeededPacketCount();
        winrt::Windows::Xbox::Chat::ChatRestriction RestrictionMode();
        winrt::Windows::Xbox::System::IUser User();
        bool IsLocal();
        bool IsLocalUserMuted();
        bool IsMuted();
        winrt::Windows::Foundation::Collections::IVectorView<uint8_t> GetAllChannels();
        void GenerateTextMessage(hstring const& message, bool allowTextToSpeechConversion);
        winrt::Windows::Xbox::Chat::ChatParticipantTypes ParticipantType();
        void ParticipantType(winrt::Windows::Xbox::Chat::ChatParticipantTypes const& val);
        float Volume();
        void Volume(float val);
        float LocalRenderTargetVolume();
        void LocalRenderTargetVolume(float val);
        bool HasRequestedTranscription();
        bool HasRequestedSynthesizedAudio();
    };
}
