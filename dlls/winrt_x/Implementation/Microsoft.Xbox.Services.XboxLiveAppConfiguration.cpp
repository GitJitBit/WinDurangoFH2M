#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.h"
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration XboxLiveAppConfiguration::SingletonInstance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t XboxLiveAppConfiguration::TitleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::ServiceConfigurationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::Environment()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::Sandbox()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
