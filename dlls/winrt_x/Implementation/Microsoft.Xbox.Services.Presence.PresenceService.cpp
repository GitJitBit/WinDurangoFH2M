#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceService.h"
#include "Microsoft.Xbox.Services.Presence.PresenceService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    winrt::event_token PresenceService::DevicePresenceChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Presence::DevicePresenceChangeEventArgs> const& __param0)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PresenceService::DevicePresenceChanged(winrt::event_token const& __param0) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token PresenceService::TitlePresenceChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Presence::TitlePresenceChangeEventArgs> const& __param0)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PresenceService::TitlePresenceChanged(winrt::event_token const& __param0) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction PresenceService::SetPresenceAsync(bool isUserActiveInTitle)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction PresenceService::SetPresenceAsync(bool isUserActiveInTitle, winrt::Microsoft::Xbox::Services::Presence::PresenceData presenceData)
    {
        LOG_WARNING("[PresenceService] SetPresenceAsync called\n");
        co_return;
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord> PresenceService::GetPresenceAsync(hstring xboxUserId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord>> PresenceService::GetPresenceForMultipleUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord>> PresenceService::GetPresenceForMultipleUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType> deviceTypes, winrt::Windows::Foundation::Collections::IVectorView<uint32_t> titleIds, winrt::Microsoft::Xbox::Services::Presence::PresenceDetailLevel detailLevel, bool onlineOnly, bool broadcastingOnly)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord>> PresenceService::GetPresenceForSocialGroupAsync(hstring socialGroup)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceRecord>> PresenceService::GetPresenceForSocialGroupAsync(hstring socialGroup, hstring socialGroupOwnerXboxuserId, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType> deviceTypes, winrt::Windows::Foundation::Collections::IVectorView<uint32_t> titleIds, winrt::Microsoft::Xbox::Services::Presence::PresenceDetailLevel detailLevel, bool onlineOnly, bool broadcastingOnly)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::DevicePresenceChangeSubscription PresenceService::SubscribeToDevicePresenceChange(hstring const& xboxUserId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PresenceService::UnsubscribeFromDevicePresenceChange(winrt::Microsoft::Xbox::Services::Presence::DevicePresenceChangeSubscription const& subscription)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::TitlePresenceChangeSubscription PresenceService::SubscribeToTitlePresenceChange(hstring const& xboxUserId, uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PresenceService::UnsubscribeFromTitlePresenceChange(winrt::Microsoft::Xbox::Services::Presence::TitlePresenceChangeSubscription const& subscription)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
