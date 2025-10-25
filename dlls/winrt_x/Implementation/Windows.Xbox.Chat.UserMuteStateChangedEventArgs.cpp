#include "pch.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Xbox::System::IUser UserMuteStateChangedEventArgs::Owner()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring UserMuteStateChangedEventArgs::RecipientXboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool UserMuteStateChangedEventArgs::Muted()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
