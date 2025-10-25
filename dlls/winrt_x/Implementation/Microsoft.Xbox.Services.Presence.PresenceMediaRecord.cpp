#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceMediaRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceMediaRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceMediaRecord::MediaId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceMediaIdType PresenceMediaRecord::MediaIdType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring PresenceMediaRecord::Name()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
