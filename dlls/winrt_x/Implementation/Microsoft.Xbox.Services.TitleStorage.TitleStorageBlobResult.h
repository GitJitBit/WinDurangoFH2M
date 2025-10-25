#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobResult.g.h"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageBlobResult : TitleStorageBlobResultT<TitleStorageBlobResult>
    {
        TitleStorageBlobResult() = default;

        winrt::Windows::Storage::Streams::IBuffer BlobBuffer();
        winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata BlobMetadata();
    };
}
