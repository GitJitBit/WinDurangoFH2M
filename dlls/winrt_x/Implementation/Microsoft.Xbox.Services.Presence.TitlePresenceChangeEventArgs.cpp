#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring TitlePresenceChangeEventArgs::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t TitlePresenceChangeEventArgs::TitleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::TitlePresenceState TitlePresenceChangeEventArgs::TitleState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
