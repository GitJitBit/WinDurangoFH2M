#pragma once
#include "Microsoft.Xbox.Services.System.XboxLiveServicesSettings.g.h"


namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    struct XboxLiveServicesSettings : XboxLiveServicesSettingsT<XboxLiveServicesSettings>
    {
        XboxLiveServicesSettings() = default;

        static winrt::Microsoft::Xbox::Services::System::XboxLiveServicesSettings SingletonInstance();
        winrt::event_token LogCallRouted(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::XboxLiveLogCallEventArgs> const& __param0);
        void LogCallRouted(winrt::event_token const& __param0) noexcept;
        winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel DiagnosticsTraceLevel();
        void DiagnosticsTraceLevel(winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel const& value);
        winrt::event_token WnsEventRecevied(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::XboxLiveWnsEventArgs> const& __param0);
        void WnsEventRecevied(winrt::event_token const& __param0) noexcept;
    };
}
namespace winrt::Microsoft::Xbox::Services::System::factory_implementation
{
    struct XboxLiveServicesSettings : XboxLiveServicesSettingsT<XboxLiveServicesSettings, implementation::XboxLiveServicesSettings>
    {
    };
}
