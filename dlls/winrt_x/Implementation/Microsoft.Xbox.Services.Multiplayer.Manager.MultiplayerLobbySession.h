#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerLobbySession.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerLobbySession : MultiplayerLobbySessionT<MultiplayerLobbySession>
    {
        MultiplayerLobbySession() = default;

        hstring CorrelationId();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> LocalMembers();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> Members();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember Host();
        hstring Properties();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants SessionConstants();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult LastTournamentTeamResult();
        void AddLocalUser(winrt::Windows::Xbox::System::User const& user);
        void RemoveLocalUser(winrt::Windows::Xbox::System::User const& user);
        void SetLocalMemberProperties(winrt::Windows::Xbox::System::User const& user, hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context);
        void DeleteLocalMemberProperties(winrt::Windows::Xbox::System::User const& user, hstring const& name, winrt::Windows::Foundation::IInspectable const& context);
        void SetLocalMemberConnectionAddress(winrt::Windows::Xbox::System::User const& user, hstring const& connectionAddress, winrt::Windows::Foundation::IInspectable const& context);
        bool IsHost(hstring const& xboxUserId);
        void SetProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context);
        void SetSynchronizedProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context);
        void SetSynchronizedHost(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember const& gameHost, winrt::Windows::Foundation::IInspectable const& context);
        void InviteFriends(winrt::Windows::Xbox::System::User const& user, hstring const& contextStringId, hstring const& customActivationContext);
        void InviteUsers(winrt::Windows::Xbox::System::User const& user, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds, hstring const& contextStringId, hstring const& customActivationContext);
    };
}
