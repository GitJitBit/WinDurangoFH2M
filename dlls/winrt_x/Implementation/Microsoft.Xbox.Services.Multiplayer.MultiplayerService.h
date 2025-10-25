#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerService : MultiplayerServiceT<MultiplayerService>
    {
        MultiplayerService() = default;

        winrt::event_token MultiplayerSessionChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeEventArgs> const& __param0);
        void MultiplayerSessionChanged(winrt::event_token const& __param0) noexcept;
        winrt::event_token MultiplayerSubscriptionLost(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSubscriptionLostEventArgs> const& __param0);
        void MultiplayerSubscriptionLost(winrt::event_token const& __param0) noexcept;
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> WriteSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionResult> TryWriteSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> WriteSessionByHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionResult> TryWriteSessionByHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> GetCurrentSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> GetCurrentSessionByHandleAsync(hstring handleId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> GetSessionsAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerGetSessionsRequest getSessionsRequest);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> GetSessionsAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, hstring xboxUserIdFilter, hstring keywordFilter, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> GetSessionsForUsersFilterAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIdsFilter, hstring keywordFilter, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncAction SetActivityAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference);
        winrt::Windows::Foundation::IAsyncOperation<hstring> SetTransferHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference targetSessionReference, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference originSessionReference);
        winrt::Windows::Foundation::IAsyncAction SetSearchHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleRequest searchHandleRequest);
        winrt::Windows::Foundation::IAsyncAction ClearActivityAsync(hstring serviceConfigurationId);
        winrt::Windows::Foundation::IAsyncAction ClearSearchHandleAsync(hstring handleId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> SendInvitesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> SendInvitesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId, hstring contextStringId, hstring activationContext);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerActivityDetails>> GetActivitiesForSocialGroupAsync(hstring serviceConfigurationId, hstring socialGroupOwnerXboxUserId, hstring socialGroup);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerActivityDetails>> GetActivitiesForUsersAsync(hstring serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleDetails>> GetSearchHandlesAsync(hstring serviceConfigurationId, hstring sessionTemplateName, hstring orderBy, bool orderAscending, hstring searchFilter);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleDetails>> GetSearchHandlesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQuerySearchHandleRequest searchHandleRequest);
        void EnableMultiplayerSubscriptions();
        void DisableMultiplayerSubscriptions();
        bool MultiplayerSubscriptionsEnabled();
    };
}
