#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceTitleRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialManagerPresenceTitleRecord : SocialManagerPresenceTitleRecordT<SocialManagerPresenceTitleRecord>
    {
        SocialManagerPresenceTitleRecord() = default;

        bool IsTitleActive();
        uint32_t TitleId();
        hstring PresenceText();
        bool IsBroadcasting();
        winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType DeviceType();
    };
}
