#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialManagerPresenceRecord : SocialManagerPresenceRecordT<SocialManagerPresenceRecord>
    {
        SocialManagerPresenceRecord() = default;

        winrt::Microsoft::Xbox::Services::Presence::UserPresenceState UserState();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::SocialManagerPresenceTitleRecord> PresenceTitleRecords();
        bool IsUserPlayingTitle(uint32_t titleId);
    };
}
