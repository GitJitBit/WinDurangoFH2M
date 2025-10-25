#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata> TitleStorageBlobMetadataResult::Items()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> TitleStorageBlobMetadataResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool TitleStorageBlobMetadataResult::HasNext()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
