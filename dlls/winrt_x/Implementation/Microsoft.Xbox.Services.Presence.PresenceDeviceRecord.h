#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceDeviceRecord : PresenceDeviceRecordT<PresenceDeviceRecord>
    {
        PresenceDeviceRecord() = default;

        winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType DeviceType();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceTitleRecord> PresenceTitleRecords();
    };
}
