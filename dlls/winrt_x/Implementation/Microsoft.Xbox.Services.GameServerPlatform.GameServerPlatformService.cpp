#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPlatformService.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPlatformService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::ClusterResult> GameServerPlatformService::AllocateClusterAsync(uint32_t gameServerTitleId, hstring serviceConfigurationId, hstring sessionTemplateName, hstring sessionName, bool abortIfQueued)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::ClusterResult> GameServerPlatformService::AllocateClusterInlineAsync(uint32_t gameServerTitleId, hstring serviceConfigurationId, hstring sandboxId, hstring ticketId, hstring gsiSetId, hstring gameVariantId, uint64_t maxAllowedPlayers, hstring location, bool abortIfQueued)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerTicketStatus> GameServerPlatformService::GetTicketStatusAsync(uint32_t gameServerTitleId, hstring ticketId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerMetadataResult> GameServerPlatformService::GetGameServerMetadataAsync(uint32_t titleId, uint32_t maxAllowedPlayers, bool publisherOnly, uint32_t maxVariants, hstring locale)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerMetadataResult> GameServerPlatformService::GetGameServerMetadataAsync(uint32_t titleId, uint32_t maxAllowedPlayers, bool publisherOnly, uint32_t maxVariants, hstring locale, winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> filterTags)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::QualityOfServiceServer>> GameServerPlatformService::GetQualityOfServiceServersAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::AllocationResult> GameServerPlatformService::AllocateSessionHost(uint32_t gameServerTitleId, winrt::Windows::Foundation::Collections::IVectorView<hstring> locations, hstring sessionId, hstring cloudGameId, hstring gameModeId, hstring sessionCookie)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::GameServerPlatform::AllocationResult> GameServerPlatformService::GetSessionHostAllocationStatus(uint32_t gameServerTitleId, hstring sessionId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
