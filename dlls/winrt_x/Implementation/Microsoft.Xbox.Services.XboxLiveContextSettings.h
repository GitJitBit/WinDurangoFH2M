#pragma once
#include "Microsoft.Xbox.Services.XboxLiveContextSettings.g.h"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveContextSettings : XboxLiveContextSettingsT<XboxLiveContextSettings>
    {
        XboxLiveContextSettings() = default;

        winrt::event_token ServiceCallRouted(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::XboxServiceCallRoutedEventArgs> const& __param0);
        void ServiceCallRouted(winrt::event_token const& __param0) noexcept;
        bool EnableServiceCallRoutedEvents();
        void EnableServiceCallRoutedEvents(bool value);
        winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel DiagnosticsTraceLevel();
        void DiagnosticsTraceLevel(winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel const& value);
        winrt::Windows::Foundation::TimeSpan HttpTimeout();
        void HttpTimeout(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan LongHttpTimeout();
        void LongHttpTimeout(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan HttpRetryDelay();
        void HttpRetryDelay(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan HttpTimeoutWindow();
        void HttpTimeoutWindow(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan WebsocketTimeoutWindow();
        void WebsocketTimeoutWindow(winrt::Windows::Foundation::TimeSpan const& value);
        bool UseCoreDispatcherForEventRouting();
        void UseCoreDispatcherForEventRouting(bool value);
        void DisableAssertsForXboxLiveThrottlingInDevSandboxes(winrt::Microsoft::Xbox::Services::XboxLiveContextThrottleSetting const& setting);
        void DisableAssertsForMaximumNumberOfWebsocketsActivated(winrt::Microsoft::Xbox::Services::XboxLiveContextRecommendedSetting const& setting);
    };
}
namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveContextSettings : XboxLiveContextSettingsT<XboxLiveContextSettings, implementation::XboxLiveContextSettings>
    {
    };
}
