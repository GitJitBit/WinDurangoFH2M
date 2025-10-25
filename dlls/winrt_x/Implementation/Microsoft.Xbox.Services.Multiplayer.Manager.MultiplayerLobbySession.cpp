#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerLobbySession.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerLobbySession.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring MultiplayerLobbySession::CorrelationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerLobbySession::SessionReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> MultiplayerLobbySession::LocalMembers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> MultiplayerLobbySession::Members()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember MultiplayerLobbySession::Host()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerLobbySession::Properties()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants MultiplayerLobbySession::SessionConstants()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult MultiplayerLobbySession::LastTournamentTeamResult()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::AddLocalUser(winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::RemoveLocalUser(winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::SetLocalMemberProperties(winrt::Windows::Xbox::System::User const& user, hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::DeleteLocalMemberProperties(winrt::Windows::Xbox::System::User const& user, hstring const& name, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::SetLocalMemberConnectionAddress(winrt::Windows::Xbox::System::User const& user, hstring const& connectionAddress, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool MultiplayerLobbySession::IsHost(hstring const& xboxUserId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::SetProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::SetSynchronizedProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::SetSynchronizedHost(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember const& gameHost, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::InviteFriends(winrt::Windows::Xbox::System::User const& user, hstring const& contextStringId, hstring const& customActivationContext)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerLobbySession::InviteUsers(winrt::Windows::Xbox::System::User const& user, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds, hstring const& contextStringId, hstring const& customActivationContext)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
