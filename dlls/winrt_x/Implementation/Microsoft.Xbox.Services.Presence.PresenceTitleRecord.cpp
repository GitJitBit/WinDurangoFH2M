#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    uint32_t PresenceTitleRecord::TitleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring PresenceTitleRecord::TitleName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime PresenceTitleRecord::LastModifiedDate()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool PresenceTitleRecord::IsTitleActive()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring PresenceTitleRecord::Presence()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceTitleViewState PresenceTitleRecord::TitleViewState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceBroadcastRecord PresenceTitleRecord::BroadcastRecord()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
