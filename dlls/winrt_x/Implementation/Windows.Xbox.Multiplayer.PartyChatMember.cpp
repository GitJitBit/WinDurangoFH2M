#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyChatMember.h"
#include "Windows.Xbox.Multiplayer.PartyChatMember.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    hstring PartyChatMember::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool PartyChatMember::IsLocal()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
