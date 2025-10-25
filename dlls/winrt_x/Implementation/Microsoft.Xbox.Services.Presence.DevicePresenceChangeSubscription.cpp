#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState DevicePresenceChangeSubscription::State()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring DevicePresenceChangeSubscription::ResourceUri()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t DevicePresenceChangeSubscription::SubscriptionId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring DevicePresenceChangeSubscription::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
