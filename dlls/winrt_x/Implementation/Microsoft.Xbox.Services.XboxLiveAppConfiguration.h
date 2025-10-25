#pragma once
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.g.h"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveAppConfiguration : XboxLiveAppConfigurationT<XboxLiveAppConfiguration>
    {
        XboxLiveAppConfiguration() = default;

        static winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration SingletonInstance();
        uint32_t TitleId();
        hstring ServiceConfigurationId();
        hstring Environment();
        hstring Sandbox();
    };
}
namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveAppConfiguration : XboxLiveAppConfigurationT<XboxLiveAppConfiguration, implementation::XboxLiveAppConfiguration>
    {
    };
}
