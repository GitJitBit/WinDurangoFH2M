#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceMediaRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceMediaRecord : PresenceMediaRecordT<PresenceMediaRecord>
    {
        PresenceMediaRecord() = default;

        hstring MediaId();
        winrt::Microsoft::Xbox::Services::Presence::PresenceMediaIdType MediaIdType();
        hstring Name();
    };
}
