#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerEvent.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerEvent.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    int32_t MultiplayerEvent::ErrorCode()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerEvent::ErrorMessage()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IInspectable MultiplayerEvent::Context()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEventType MultiplayerEvent::EventType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEventArgs MultiplayerEvent::EventArgs()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerSessionType MultiplayerEvent::SessionType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
