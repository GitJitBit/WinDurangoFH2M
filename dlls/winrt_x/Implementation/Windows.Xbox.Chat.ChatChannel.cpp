#include "pch.h"
#include "Windows.Xbox.Chat.ChatChannel.h"
#include "Windows.Xbox.Chat.ChatChannel.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Chat::IChatParticipant> ChatChannel::Participants()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
