#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::DateTime MultiplayerSessionArbitrationServer::ArbitrationStartTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationState MultiplayerSessionArbitrationServer::ResultState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultSource MultiplayerSessionArbitrationServer::ResultSource()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSessionArbitrationServer::ResultConfidenceLevel()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> MultiplayerSessionArbitrationServer::Results()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
