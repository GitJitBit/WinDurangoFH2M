#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.g.cpp"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.h"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageQuota> TitleStorageService::GetQuotaAsync(hstring serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType storageType)
    {
        printf("[TitleStorageService] GetQuotaAsync NOT IMPLEMENTED\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageQuota> TitleStorageService::GetQuotaForSessionStorageAsync(hstring serviceConfigurationId, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName)
    {
		printf("[TitleStorageService] GetQuotaForSessionStorageAsync NOT IMPLEMENTED\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> TitleStorageService::GetBlobMetadataAsync(hstring serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType storageType, hstring blobPath, hstring xboxUserId, uint32_t skipItems, uint32_t maxItems)
    {
        co_return winrt::make<TitleStorageBlobMetadataResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> TitleStorageService::GetBlobMetadataForSessionStorageAsync(hstring serviceConfigurationId, hstring blobPath, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName, uint32_t skipItems, uint32_t maxItems)
    {
		printf("[TitleStorageService] GetBlobMetadataForSessionStorageAsync NOT IMPLEMENTED\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction TitleStorageService::DeleteBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, bool deleteOnlyIfETagMatches)
    {
		printf("[TitleStorageService] DeleteBlobAsync NOT IMPLEMENTED\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobResult> TitleStorageService::DownloadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery)
    {
		printf("[TitleStorageService] DownloadBlobAsync NOT IMPLEMENTED\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobResult> TitleStorageService::DownloadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery, uint32_t preferredDownloadBlockSize)
    {
		printf("[TitleStorageService] DownloadBlobAsync NOT IMPLEMENTED\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata> TitleStorageService::UploadBlobAsync(winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata blobMetadata, winrt::Windows::Storage::Streams::IBuffer blobBuffer, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageETagMatchCondition etagMatchCondition, uint32_t preferredUploadBlockSize)
    {
		printf("[TitleStorageService] UploadBlobAsync NOT IMPLEMENTED\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
}
