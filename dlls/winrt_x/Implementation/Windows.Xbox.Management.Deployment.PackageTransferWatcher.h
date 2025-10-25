#pragma once
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct PackageTransferWatcher : PackageTransferWatcherT<PackageTransferWatcher>
    {
        PackageTransferWatcher() = default;

        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher Create(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds);
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher Create(winrt::Windows::ApplicationModel::Package const& package);
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& specifiers);
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher CreateForContentPackage(winrt::Windows::Xbox::Management::Deployment::IContentPackage const& package);
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher CreateForDownloadableContentPackage(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage const& package);
        winrt::Windows::Foundation::Collections::IVectorView<uint32_t> ChunkIds();
        winrt::event_token ChunkCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ChunkCompletedEventArgs> const& handler);
        void ChunkCompleted(winrt::event_token const& cookie) noexcept;
        winrt::event_token ProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ProgressChangedEventArgs> const& handler);
        void ProgressChanged(winrt::event_token const& cookie) noexcept;
        winrt::event_token TransferCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferCompletedEventArgs> const& handler);
        void TransferCompleted(winrt::event_token const& cookie) noexcept;
        winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus TransferStatus();
        winrt::Windows::Xbox::Management::Deployment::PackageTransferType TransferType();
        winrt::event_token TransferStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferStatusChangedEventArgs> const& handler);
        void TransferStatusChanged(winrt::event_token const& cookie) noexcept;
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct PackageTransferWatcher : PackageTransferWatcherT<PackageTransferWatcher, implementation::PackageTransferWatcher>
    {
    };
}
