#include "pch.h"
#include "Windows.Xbox.Management.Deployment.StreamingInstallQueue.h"
#include "Windows.Xbox.Management.Deployment.StreamingInstallQueue.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> StreamingInstallQueue::GetOrderedPackageInstanceIds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::IStreamingPackage StreamingInstallQueue::GetStreamingPackage(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token StreamingInstallQueue::QueueChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::IStreamingQueueChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StreamingInstallQueue::QueueChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token StreamingInstallQueue::StreamingPackageStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Management::Deployment::IStreamingPackageStateChangedEventArgs> const& handler)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StreamingInstallQueue::StreamingPackageStateChanged(winrt::event_token const& token) noexcept
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
