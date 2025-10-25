#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceBroadcastRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceBroadcastRecord : PresenceBroadcastRecordT<PresenceBroadcastRecord>
    {
        PresenceBroadcastRecord() = default;

        hstring BroadcastId();
        hstring Session();
        hstring Provider();
        uint32_t ViewerCount();
        winrt::Windows::Foundation::DateTime StartTime();
    };
}
