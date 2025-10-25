#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.g.h"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageBlobMetadataResult : TitleStorageBlobMetadataResultT<TitleStorageBlobMetadataResult>
    {
        TitleStorageBlobMetadataResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata> Items();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> GetNextAsync(uint32_t maxItems);
        bool HasNext();
    };
}
