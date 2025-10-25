#pragma once
#include "Windows.Xbox.Management.Deployment.StreamingInstallQueue.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct StreamingInstallQueue : StreamingInstallQueueT<StreamingInstallQueue>
    {
        StreamingInstallQueue() = default;

        winrt::Windows::Foundation::Collections::IVectorView<hstring> GetOrderedPackageInstanceIds();
        winrt::Windows::Xbox::Management::Deployment::IStreamingPackage GetStreamingPackage(hstring const& packageInstanceId);
        winrt::event_token QueueChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::IStreamingQueueChangedEventArgs> const& handler);
        void QueueChanged(winrt::event_token const& token) noexcept;
        winrt::event_token StreamingPackageStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::IStreamingPackageStateChangedEventArgs> const& handler);
        void StreamingPackageStateChanged(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct StreamingInstallQueue : StreamingInstallQueueT<StreamingInstallQueue, implementation::StreamingInstallQueue>
    {
    };
}
