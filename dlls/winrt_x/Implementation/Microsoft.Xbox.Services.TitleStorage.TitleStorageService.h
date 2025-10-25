#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.g.h"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageService : TitleStorageServiceT<TitleStorageService>
    {
        TitleStorageService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageQuota> GetQuotaAsync(hstring serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType storageType);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageQuota> GetQuotaForSessionStorageAsync(hstring serviceConfigurationId, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> GetBlobMetadataAsync(hstring serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType storageType, hstring blobPath, hstring xboxUserId, uint32_t skipItems, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> GetBlobMetadataForSessionStorageAsync(hstring serviceConfigurationId, hstring blobPath, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName, uint32_t skipItems, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncAction DeleteBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, bool deleteOnlyIfETagMatches);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobResult> DownloadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobResult> DownloadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery, uint32_t preferredDownloadBlockSize);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata> UploadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, uint32_t preferredUploadBlockSize);
    };
}
