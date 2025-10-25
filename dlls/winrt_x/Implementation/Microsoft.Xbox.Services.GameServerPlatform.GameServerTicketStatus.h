#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerTicketStatus.g.h"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerTicketStatus : GameServerTicketStatusT<GameServerTicketStatus>
    {
        GameServerTicketStatus() = default;

        hstring TicketId();
        hstring ClusterId();
        uint32_t TitleId();
        hstring HostName();
        winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerHostStatus Status();
        hstring Description();
        hstring SecureContext();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> PortMappings();
        hstring GameHostId();
        hstring Region();
    };
}
