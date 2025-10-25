#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChannelUpdatedEventArgs.h"
#include "Microsoft.Xbox.GameChat.ChannelUpdatedEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Microsoft::Xbox::GameChat::ChatUser ChannelUpdatedEventArgs::ChatUser()
    {
        LOG_NOT_IMPLEMENTED();
        throw hresult_not_implemented();
    }
    uint8_t ChannelUpdatedEventArgs::Channel()
    {
        LOG_NOT_IMPLEMENTED();
        throw hresult_not_implemented();
    }
}
