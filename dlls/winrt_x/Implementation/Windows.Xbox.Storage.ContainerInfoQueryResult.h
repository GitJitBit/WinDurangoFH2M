#pragma once
#include "Windows.Xbox.Storage.ContainerInfoQueryResult.g.h"

namespace WinDurango::impl
{
	class ConnectedStorage;
}

namespace winrt::Windows::Xbox::Storage::implementation
{
    struct ContainerInfoQueryResult : ContainerInfoQueryResultT<ContainerInfoQueryResult>
    {
        ContainerInfoQueryResult() = default;
        ContainerInfoQueryResult(hstring containerNamePrefix, WinDurango::impl::ConnectedStorage* connectedStorage) {
            this->containerNamePrefix = containerNamePrefix;
			m_connectedStorage = connectedStorage;
        }


        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo>> GetContainerInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo>> GetContainerInfoAsync();
        winrt::Windows::Foundation::IAsyncOperation<uint32_t> GetItemCountAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo2>> GetContainerInfo2Async(uint32_t startIndex, uint32_t maxNumberOfItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Storage::ContainerInfo2>> GetContainerInfo2Async();
    private:
        hstring containerNamePrefix;
		WinDurango::impl::ConnectedStorage* m_connectedStorage = nullptr;
    };
}
