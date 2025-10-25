#include "pch.h"
#include "Windows.Xbox.Chat.ChatMuteList.h"
#include "Windows.Xbox.Chat.ChatMuteList.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::event_token ChatMuteList::UserMuteStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Chat::UserMuteStateChangedEventArgs> const& handler)
    {
		LOG_WARNING("ChatMuteList::UserMuteStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Chat::UserMuteStateChangedEventArgs> const& handler) Stubbed!!");
        return m_muteEvent.add(handler);
    }
    void ChatMuteList::UserMuteStateChanged(winrt::event_token const& token) noexcept
    {
		LOG_WARNING("ChatMuteList::UserMuteStateChanged(winrt::event_token const& token) Stubbed!!");
        m_muteEvent.remove(token);
    }
}
