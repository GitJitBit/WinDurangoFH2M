#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.g.h"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct AllocationResult : AllocationResultT<AllocationResult>
    {
        AllocationResult() = default;

        winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerFulfillmentState FulfillmentState();
        hstring HostName();
        hstring SessionHostId();
        hstring Region();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> PortMappings();
        hstring SecureDeviceAddress();
    };
}
