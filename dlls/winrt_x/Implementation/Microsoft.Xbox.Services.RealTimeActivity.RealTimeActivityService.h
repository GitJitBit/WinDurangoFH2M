#pragma once
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.g.h"


namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    struct RealTimeActivityService : RealTimeActivityServiceT<RealTimeActivityService>
    {
        RealTimeActivityService() = default;

        void Activate();
        void Deactivate();
        winrt::event_token RealTimeActivityConnectionStateChange(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityConnectionState> const& __param0);
        void RealTimeActivityConnectionStateChange(winrt::event_token const& __param0) noexcept;
        winrt::event_token RealTimeActivitySubscriptionError(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionErrorEventArgs> const& __param0);
        void RealTimeActivitySubscriptionError(winrt::event_token const& __param0) noexcept;
        winrt::event_token RealTimeActivityResync(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityResyncEventArgs> const& __param0);
        void RealTimeActivityResync(winrt::event_token const& __param0) noexcept;
    };
}
