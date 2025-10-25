#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.g.h"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct ClusterResult : ClusterResultT<ClusterResult>
    {
        ClusterResult() = default;

        winrt::Windows::Foundation::TimeSpan PollInterval();
        winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerFulfillmentState FulfillmentState();
        hstring HostName();
        hstring Region();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> PortMappings();
        hstring SecureDeviceAddress();
    };
}
