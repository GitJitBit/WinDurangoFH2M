#pragma once
#include "Microsoft.Xbox.GameChat.ChatManager.g.h"
#include "Microsoft.Xbox.GameChat.ChatManagerSettings.h"
namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatManager : ChatManagerT<ChatManager>
    {
        ChatManager() = default;

        ChatManager(winrt::Microsoft::Xbox::GameChat::ChatSessionPeriod const& chatSessionPeriod);
        ChatManager(winrt::Microsoft::Xbox::GameChat::ChatSessionPeriod const& chatSessionPeriod, bool titleEnforcedPrivilegeAndPrivacy);
        ChatManager(winrt::Microsoft::Xbox::GameChat::ChatSessionPeriod const& chatSessionPeriod, winrt::Microsoft::Xbox::GameChat::PrivilegeAndPrivacyEnforcementMode const& privilegeAndPrivacyEnforcementMode, winrt::Microsoft::Xbox::GameChat::TextConversionMode const& textConversionMode);
        winrt::Microsoft::Xbox::GameChat::ChatManagerSettings ChatSettings();
        winrt::event_token OnDebugMessage(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::GameChat::DebugMessageEventArgs> const& __param0);
        void OnDebugMessage(winrt::event_token const& __param0) noexcept;
        winrt::event_token OnOutgoingChatPacketReady(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::GameChat::ChatPacketEventArgs> const& __param0);
        void OnOutgoingChatPacketReady(winrt::event_token const& __param0) noexcept;
        winrt::event_token OnCompareUniqueConsoleIdentifiers(winrt::Microsoft::Xbox::GameChat::CompareUniqueConsoleIdentifiersHandler const& __param0);
        void OnCompareUniqueConsoleIdentifiers(winrt::event_token const& __param0) noexcept;
        winrt::event_token OnUserAddedToChannel(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::GameChat::ChannelUpdatedEventArgs> const& __param0);
        void OnUserAddedToChannel(winrt::event_token const& __param0) noexcept;
        winrt::event_token OnUserRemovedFromChannel(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::GameChat::ChannelUpdatedEventArgs> const& __param0);
        void OnUserRemovedFromChannel(winrt::event_token const& __param0) noexcept;
        winrt::event_token OnPreEncodeAudioBuffer(winrt::Microsoft::Xbox::GameChat::ProcessAudioBufferHandler const& __param0);
        void OnPreEncodeAudioBuffer(winrt::event_token const& __param0) noexcept;
        winrt::event_token OnPostDecodeAudioBuffer(winrt::Microsoft::Xbox::GameChat::ProcessAudioBufferHandler const& __param0);
        void OnPostDecodeAudioBuffer(winrt::event_token const& __param0) noexcept;
        winrt::event_token OnTextMessageReceived(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::GameChat::TextMessageReceivedEventArgs> const& __param0);
        void OnTextMessageReceived(winrt::event_token const& __param0) noexcept;
        winrt::event_token OnAccessibilitySettingsChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::GameChat::AccessibilitySettingsChangedEventArgs> const& __param0);
        void OnAccessibilitySettingsChanged(winrt::event_token const& __param0) noexcept;
        winrt::Microsoft::Xbox::GameChat::ChatMessageType ProcessIncomingChatMessage(winrt::Windows::Storage::Streams::IBuffer const& chatPacket, winrt::Windows::Foundation::IInspectable const& uniqueRemoteConsoleIdentifier);
        void HandleNewRemoteConsole(winrt::Windows::Foundation::IInspectable const& uniqueRemoteConsoleIdentifier);
        winrt::Windows::Foundation::IAsyncAction AddLocalUserToChatChannelAsync(uint8_t channelIndex, winrt::Windows::Xbox::System::IUser user);
        winrt::Windows::Foundation::IAsyncAction AddLocalUsersToChatChannelAsync(uint8_t channelIndex, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> users);
        winrt::Windows::Foundation::IAsyncAction RemoveLocalUserFromChatChannelAsync(uint8_t channelIndex, winrt::Windows::Xbox::System::IUser user);
        winrt::Windows::Foundation::IAsyncAction RemoveRemoteConsoleAsync(winrt::Windows::Foundation::IInspectable uniqueRemoteConsoleIdentifier);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::GameChat::ChatUser> GetChatUsers();
        void MuteUserFromAllChannels(winrt::Microsoft::Xbox::GameChat::ChatUser const& user);
        void UnmuteUserFromAllChannels(winrt::Microsoft::Xbox::GameChat::ChatUser const& user);
        void MuteAllUsersFromAllChannels();
        void UnmuteAllUsersFromAllChannels();
        winrt::Windows::Foundation::IAsyncAction MuteUserIfReputationIsBadAsync(winrt::Microsoft::Xbox::GameChat::ChatUser user);
        bool HasMicFocus();
        winrt::Microsoft::Xbox::GameChat::ChatPerformanceCounters ChatPerformanceCounters();
    };
}
namespace winrt::Microsoft::Xbox::GameChat::factory_implementation
{
    struct ChatManager : ChatManagerT<ChatManager, implementation::ChatManager>
    {
    };
}
