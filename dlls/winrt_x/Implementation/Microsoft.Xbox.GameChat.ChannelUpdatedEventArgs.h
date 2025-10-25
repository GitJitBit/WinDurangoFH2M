#pragma once
#include "Microsoft.Xbox.GameChat.ChannelUpdatedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    struct ChannelUpdatedEventArgs : ChannelUpdatedEventArgsT<ChannelUpdatedEventArgs>
    {
        ChannelUpdatedEventArgs() = default;

        winrt::Microsoft::Xbox::GameChat::ChatUser ChatUser();
        uint8_t Channel();
    };
}
