#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPlatformService.g.h"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerPlatformService : GameServerPlatformServiceT<GameServerPlatformService>
    {
        GameServerPlatformService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::ClusterResult> AllocateClusterAsync(uint32_t gameServerTitleId, hstring serviceConfigurationId, hstring sessionTemplateName, hstring sessionName, bool abortIfQueued);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::ClusterResult> AllocateClusterInlineAsync(uint32_t gameServerTitleId, hstring serviceConfigurationId, hstring sandboxId, hstring ticketId, hstring gsiSetId, hstring gameVariantId, uint64_t maxAllowedPlayers, hstring location, bool abortIfQueued);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerTicketStatus> GetTicketStatusAsync(uint32_t gameServerTitleId, hstring ticketId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerMetadataResult> GetGameServerMetadataAsync(uint32_t titleId, uint32_t maxAllowedPlayers, bool publisherOnly, uint32_t maxVariants, hstring locale);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerMetadataResult> GetGameServerMetadataAsync(uint32_t titleId, uint32_t maxAllowedPlayers, bool publisherOnly, uint32_t maxVariants, hstring locale, winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> filterTags);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::QualityOfServiceServer>> GetQualityOfServiceServersAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::AllocationResult> AllocateSessionHost(uint32_t gameServerTitleId, winrt::Windows::Foundation::Collections::IVectorView<hstring> locations, hstring sessionId, hstring cloudGameId, hstring gameModeId, hstring sessionCookie);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::AllocationResult> GetSessionHostAllocationStatus(uint32_t gameServerTitleId, hstring sessionId);
    };
}
