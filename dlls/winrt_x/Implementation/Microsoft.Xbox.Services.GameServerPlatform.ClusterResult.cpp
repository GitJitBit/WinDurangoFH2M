#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    winrt::Windows::Foundation::TimeSpan ClusterResult::PollInterval()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerFulfillmentState ClusterResult::FulfillmentState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ClusterResult::HostName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ClusterResult::Region()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> ClusterResult::PortMappings()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ClusterResult::SecureDeviceAddress()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
