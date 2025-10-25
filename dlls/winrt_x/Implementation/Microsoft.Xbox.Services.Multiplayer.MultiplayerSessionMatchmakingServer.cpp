#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MatchmakingStatus MultiplayerSessionMatchmakingServer::Status()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMatchmakingServer::StatusDetails()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MultiplayerSessionMatchmakingServer::TypicalWait()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionMatchmakingServer::TargetSessionRef()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
