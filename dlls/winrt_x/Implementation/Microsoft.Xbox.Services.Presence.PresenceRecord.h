#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceRecord : PresenceRecordT<PresenceRecord>
    {
        PresenceRecord() = default;

        hstring XboxUserId();
        winrt::Microsoft::Xbox::Services::Presence::UserPresenceState UserState();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceRecord> PresenceDeviceRecords();
        bool IsUserPlayingTitle(uint32_t titleId);
    };
}
