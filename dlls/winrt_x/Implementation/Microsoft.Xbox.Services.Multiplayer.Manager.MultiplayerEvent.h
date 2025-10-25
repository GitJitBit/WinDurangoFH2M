#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerEvent.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerEvent : MultiplayerEventT<MultiplayerEvent>
    {
        MultiplayerEvent() = default;

        int32_t ErrorCode();
        hstring ErrorMessage();
        winrt::Windows::Foundation::IInspectable Context();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEventType EventType();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEventArgs EventArgs();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerSessionType SessionType();
    };
}
