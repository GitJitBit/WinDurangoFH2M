#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.g.h"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageBlobMetadata : TitleStorageBlobMetadataT<TitleStorageBlobMetadata>
    {
        TitleStorageBlobMetadata() = default;

        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId);
        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag);
        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag, winrt::Windows::Foundation::DateTime const& clientTimestamp);
        static winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata CreateTitleStorageBlobMetadataForSessionStorage(hstring const& serviceConfigurationId, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& multiplayerSessionTemplateName, hstring const& multiplayerSessionName, hstring const& displayName, hstring const& eTag);
        hstring BlobPath();
        winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType BlobType();
        winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType StorageType();
        hstring DisplayName();
        hstring ETag();
        winrt::Windows::Foundation::DateTime ClientTimestamp();
        void set(winrt::Windows::Foundation::DateTime const& value);
        uint64_t Length();
        hstring ServiceConfigurationId();
        hstring XboxUserId();
        hstring MultiplayerSessionTemplateName();
        hstring MultiplayerSessionName();
    };
}
namespace winrt::Microsoft::Xbox::Services::TitleStorage::factory_implementation
{
    struct TitleStorageBlobMetadata : TitleStorageBlobMetadataT<TitleStorageBlobMetadata, implementation::TitleStorageBlobMetadata>
    {
    };
}
