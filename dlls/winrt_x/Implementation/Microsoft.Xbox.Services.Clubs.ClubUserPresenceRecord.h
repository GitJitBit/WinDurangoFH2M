#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubUserPresenceRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubUserPresenceRecord : ClubUserPresenceRecordT<ClubUserPresenceRecord>
    {
        ClubUserPresenceRecord() = default;

        hstring Xuid();
        winrt::Windows::Foundation::DateTime LastSeen();
        winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresence LastSeenState();
    };
}
