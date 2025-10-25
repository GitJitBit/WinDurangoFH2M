#pragma once
#include "Windows.Xbox.Storage.ConnectedStorageContainer.g.h"


namespace WinDurango::impl
{
	class ConnectedStorage;
}

namespace winrt::Windows::Xbox::Storage::implementation
{
    struct ConnectedStorageContainer : ConnectedStorageContainerT<ConnectedStorageContainer>
    {
        ConnectedStorageContainer() = default;
        ConnectedStorageContainer(hstring name, WinDurango::impl::ConnectedStorage* connectedStorage)
        {
			containerName = name;
			m_connectedStorage = connectedStorage;
        }

        hstring Name();
        winrt::Windows::Xbox::Storage::ConnectedStorageSpace OwningSpace();
        winrt::Windows::Foundation::IAsyncAction SubmitUpdatesAsync(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Storage::Streams::IBuffer> blobsToWrite, winrt::Windows::Foundation::Collections::IIterable<hstring> blobsToDelete);
        winrt::Windows::Foundation::IAsyncAction ReadAsync(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Storage::Streams::IBuffer> blobsToRead);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Storage::Streams::IBuffer>> GetAsync(winrt::Windows::Foundation::Collections::IIterable<hstring> blobsToRead);
        winrt::Windows::Foundation::IAsyncAction SubmitPropertySetUpdatesAsync(winrt::Windows::Foundation::Collections::IPropertySet blobsToWrite, winrt::Windows::Foundation::Collections::IIterable<hstring> blobsToDelete);
        winrt::Windows::Foundation::IAsyncAction SubmitUpdatesAsync(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Storage::Streams::IBuffer> blobsToWrite, winrt::Windows::Foundation::Collections::IIterable<hstring> blobsToDelete, hstring displayName);
        winrt::Windows::Foundation::IAsyncAction SubmitPropertySetUpdatesAsync(winrt::Windows::Foundation::Collections::IPropertySet blobsToWrite, winrt::Windows::Foundation::Collections::IIterable<hstring> blobsToDelete, hstring displayName);
        winrt::Windows::Xbox::Storage::BlobInfoQueryResult CreateBlobInfoQuery(hstring const& blobNamePrefix);

    public:
        hstring containerName;
        WinDurango::impl::ConnectedStorage* m_connectedStorage = nullptr;
    };
}
