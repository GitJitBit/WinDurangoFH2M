#pragma once
#include "Windows.Xbox.Chat.ChatChannel.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatChannel : ChatChannelT<ChatChannel>
    {
        ChatChannel() = default;

        winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Chat::IChatParticipant> Participants();
    };
}
namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatChannel : ChatChannelT<ChatChannel, implementation::ChatChannel>
    {
    };
}
