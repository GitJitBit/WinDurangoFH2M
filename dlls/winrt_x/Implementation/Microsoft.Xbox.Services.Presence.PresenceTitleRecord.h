#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceTitleRecord : PresenceTitleRecordT<PresenceTitleRecord>
    {
        PresenceTitleRecord() = default;

        uint32_t TitleId();
        hstring TitleName();
        winrt::Windows::Foundation::DateTime LastModifiedDate();
        bool IsTitleActive();
        hstring Presence();
        winrt::Microsoft::Xbox::Services::Presence::PresenceTitleViewState TitleViewState();
        winrt::Microsoft::Xbox::Services::Presence::PresenceBroadcastRecord BroadcastRecord();
    };
}
