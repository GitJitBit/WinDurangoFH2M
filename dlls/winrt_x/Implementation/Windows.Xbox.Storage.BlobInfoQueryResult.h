#pragma once
#include "Windows.Xbox.Storage.BlobInfoQueryResult.g.h"
#include "Windows.Xbox.Storage.ConnectedStorageContainer.h"
#include "hstring.h"

namespace winrt::Windows::Xbox::Storage::implementation
{
    struct BlobInfoQueryResult : BlobInfoQueryResultT<BlobInfoQueryResult>
    {
        BlobInfoQueryResult() = default;
        BlobInfoQueryResult(hstring parent, hstring prefix, WinDurango::impl::ConnectedStorage* connectedStorage){
            this->parentName = parent;
            this->prefix = prefix;
			m_connectedStorage = connectedStorage;
        }

        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::BlobInfo>> GetBlobInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::BlobInfo>> GetBlobInfoAsync();
        winrt::Windows::Foundation::IAsyncOperation<uint32_t> GetItemCountAsync();

    private:
        hstring parentName;
        hstring prefix;
        WinDurango::impl::ConnectedStorage* m_connectedStorage = nullptr;
    };
}
