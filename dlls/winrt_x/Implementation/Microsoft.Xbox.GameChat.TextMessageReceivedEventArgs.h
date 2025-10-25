#pragma once
#include "Microsoft.Xbox.GameChat.TextMessageReceivedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct TextMessageReceivedEventArgs : TextMessageReceivedEventArgsT<TextMessageReceivedEventArgs>
    {
        TextMessageReceivedEventArgs() = default;

        hstring Message();
        winrt::Microsoft::Xbox::GameChat::ChatTextMessageType ChatTextMessageType();
        winrt::Microsoft::Xbox::GameChat::ChatUser ChatUser();
    };
}
