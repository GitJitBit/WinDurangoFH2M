#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerMember.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerMember : MultiplayerMemberT<MultiplayerMember>
    {
        MultiplayerMember() = default;

        uint32_t MemberId();
        hstring TeamId();
        hstring XboxUserId();
        hstring DebugGamertag();
        bool IsLocal();
        bool IsInLobby();
        bool IsInGame();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus Status();
        hstring ConnectionAddress();
        hstring Properties();
        bool IsMemberOnSameDevice(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember const& member);
        hstring _DeviceToken();
    };
}
