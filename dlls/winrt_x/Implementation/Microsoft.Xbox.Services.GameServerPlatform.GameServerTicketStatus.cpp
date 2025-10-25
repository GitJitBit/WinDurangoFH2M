#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerTicketStatus.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerTicketStatus.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring GameServerTicketStatus::TicketId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::ClusterId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t GameServerTicketStatus::TitleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::HostName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerHostStatus GameServerTicketStatus::Status()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::Description()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::SecureContext()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> GameServerTicketStatus::PortMappings()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::GameHostId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::Region()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
