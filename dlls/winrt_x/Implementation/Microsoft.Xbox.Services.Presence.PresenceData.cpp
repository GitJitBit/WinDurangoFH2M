#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceData.h"
#include "Microsoft.Xbox.Services.Presence.PresenceData.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    PresenceData::PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId)
    {
		LOG_WARNING("[PresenceData] PresenceData::PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId) called\n");
    }
    PresenceData::PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& presenceTokenIds)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring PresenceData::ServiceConfigurationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring PresenceData::PresenceId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PresenceData::PresenceTokenIds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
