#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceRecord.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Presence::UserPresenceState SocialManagerPresenceRecord::UserState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::SocialManagerPresenceTitleRecord> SocialManagerPresenceRecord::PresenceTitleRecords()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool SocialManagerPresenceRecord::IsUserPlayingTitle(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
