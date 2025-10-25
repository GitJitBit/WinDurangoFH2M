#pragma once
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChatPacketEventArgs : ChatPacketEventArgsT<ChatPacketEventArgs>
    {
        ChatPacketEventArgs() = default;

        winrt::Windows::Storage::Streams::IBuffer PacketBuffer();
        bool SendReliable();
        bool SendInOrder();
        bool SendPacketToAllConnectedConsoles();
        winrt::Windows::Foundation::IInspectable UniqueTargetConsoleIdentifier();
        winrt::Microsoft::Xbox::GameChat::ChatMessageType ChatMessageType();
        winrt::Microsoft::Xbox::GameChat::ChatUser ChatUser();
    };
}
