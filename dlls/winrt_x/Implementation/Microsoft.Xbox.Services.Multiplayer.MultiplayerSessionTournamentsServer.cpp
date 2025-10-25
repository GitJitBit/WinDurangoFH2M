#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentReference MultiplayerSessionTournamentsServer::TournamentReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference> MultiplayerSessionTournamentsServer::Teams()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationState MultiplayerSessionTournamentsServer::RegistrationState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationReason MultiplayerSessionTournamentsServer::RegistrationReason()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::NextGameStartTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionTournamentsServer::NextGameSessionRef()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::LastGameEndTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult MultiplayerSessionTournamentsServer::LastTeamResult()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultSource MultiplayerSessionTournamentsServer::LastGameResultSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
