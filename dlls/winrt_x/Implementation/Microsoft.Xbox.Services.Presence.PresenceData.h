#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceData.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceData : PresenceDataT<PresenceData>
    {
        PresenceData() = default;

        PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId);
        PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& presenceTokenIds);
        hstring ServiceConfigurationId();
        hstring PresenceId();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> PresenceTokenIds();
    };
}
namespace winrt::Microsoft::Xbox::Services::Presence::factory_implementation
{
    struct PresenceData : PresenceDataT<PresenceData, implementation::PresenceData>
    {
    };
}
