#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceService.g.h"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceService : PresenceServiceT<PresenceService>
    {
        PresenceService() = default;

        winrt::event_token DevicePresenceChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Presence::DevicePresenceChangeEventArgs> const& __param0);
        void DevicePresenceChanged(winrt::event_token const& __param0) noexcept;
        winrt::event_token TitlePresenceChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Presence::TitlePresenceChangeEventArgs> const& __param0);
        void TitlePresenceChanged(winrt::event_token const& __param0) noexcept;
        winrt::Windows::Foundation::IAsyncAction SetPresenceAsync(bool isUserActiveInTitle);
        winrt::Windows::Foundation::IAsyncAction SetPresenceAsync(bool isUserActiveInTitle, winrt::Microsoft::Xbox::Services::Presence::PresenceData presenceData);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord> GetPresenceAsync(hstring xboxUserId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord>> GetPresenceForMultipleUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord>> GetPresenceForMultipleUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType> deviceTypes, winrt::Windows::Foundation::Collections::IVectorView<uint32_t> titleIds, winrt::Microsoft::Xbox::Services::Presence::PresenceDetailLevel detailLevel, bool onlineOnly, bool broadcastingOnly);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord>> GetPresenceForSocialGroupAsync(hstring socialGroup);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord>> GetPresenceForSocialGroupAsync(hstring socialGroup, hstring socialGroupOwnerXboxuserId, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType> deviceTypes, winrt::Windows::Foundation::Collections::IVectorView<uint32_t> titleIds, winrt::Microsoft::Xbox::Services::Presence::PresenceDetailLevel detailLevel, bool onlineOnly, bool broadcastingOnly);
        winrt::Microsoft::Xbox::Services::Presence::DevicePresenceChangeSubscription SubscribeToDevicePresenceChange(hstring const& xboxUserId);
        void UnsubscribeFromDevicePresenceChange(winrt::Microsoft::Xbox::Services::Presence::DevicePresenceChangeSubscription const& subscription);
        winrt::Microsoft::Xbox::Services::Presence::TitlePresenceChangeSubscription SubscribeToTitlePresenceChange(hstring const& xboxUserId, uint32_t titleId);
        void UnsubscribeFromTitlePresenceChange(winrt::Microsoft::Xbox::Services::Presence::TitlePresenceChangeSubscription const& subscription);
    };
}
