#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionStates : MultiplayerSessionStatesT<MultiplayerSessionStates>
    {
        MultiplayerSessionStates() = default;

        winrt::Windows::Foundation::DateTime StartTime();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStatus Status();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility Visibility();
        bool IsMyTurn();
        hstring XboxUserId();
        uint32_t AcceptedMemberCount();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction JoinRestriction();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> Keywords();
    };
}
