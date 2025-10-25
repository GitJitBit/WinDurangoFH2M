#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerGameSession.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerGameSession.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring MultiplayerGameSession::CorrelationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerGameSession::SessionReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> MultiplayerGameSession::Members()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember MultiplayerGameSession::Host()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerGameSession::Properties()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants MultiplayerGameSession::SessionConstants()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference> MultiplayerGameSession::TournamentTeams()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> MultiplayerGameSession::TournamentTeamResults()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool MultiplayerGameSession::IsHost(hstring const& xboxUserId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerGameSession::SetProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerGameSession::SetSynchronizedProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerGameSession::SetSynchronizedHost(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember const& gameHost, winrt::Windows::Foundation::IInspectable const& context)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
