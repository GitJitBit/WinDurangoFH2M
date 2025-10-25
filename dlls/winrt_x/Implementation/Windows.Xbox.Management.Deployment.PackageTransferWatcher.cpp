#include "pch.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
		LOG_WARNING("PackageTransferWatcher::Create\n");
		return winrt::make<winrt::Windows::Xbox::Management::Deployment::implementation::PackageTransferWatcher>();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::Create(winrt::Windows::ApplicationModel::Package const& package)
    {
		LOG_WARNING("PackageTransferWatcher::Create\n");
		return winrt::make<winrt::Windows::Xbox::Management::Deployment::implementation::PackageTransferWatcher>();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& specifiers)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForContentPackage(winrt::Windows::Xbox::Management::Deployment::IContentPackage const& package)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForDownloadableContentPackage(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage const& package)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> PackageTransferWatcher::ChunkIds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ChunkCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ChunkCompletedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); return {};
    }
    void PackageTransferWatcher::ChunkCompleted(winrt::event_token const& cookie) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::ProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ProgressChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); return {};
    }
    void PackageTransferWatcher::ProgressChanged(winrt::event_token const& cookie) noexcept
    {
        LOG_WARNING("PackageTransferWatcher::ProgressChanged\n");
    }
    winrt::event_token PackageTransferWatcher::TransferCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferCompletedEventArgs> const& handler)
    {
		LOG_WARNING("PackageTransferWatcher::TransferCompleted\n");
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferCompleted(winrt::event_token const& cookie) noexcept
    {
		LOG_WARNING("PackageTransferWatcher::TransferCompleted\n");
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus PackageTransferWatcher::TransferStatus()
    {
		LOG_WARNING("PackageTransferWatcher::TransferStatus\n");
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::PackageTransferType PackageTransferWatcher::TransferType()
    {
		LOG_WARNING("PackageTransferWatcher::TransferType\n");
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token PackageTransferWatcher::TransferStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferStatusChangedEventArgs> const& handler)
    {
		LOG_WARNING("PackageTransferWatcher::TransferStatusChanged\n");
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void PackageTransferWatcher::TransferStatusChanged(winrt::event_token const& cookie) noexcept
    {
		LOG_WARNING("PackageTransferWatcher::TransferStatusChanged\n");
    }
}
