#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    winrt::Microsoft::Xbox::Services::Matchmaking::TicketStatus MatchTicketDetailsResponse::MatchStatus()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MatchTicketDetailsResponse::EstimatedWaitTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Matchmaking::PreserveSessionMode MatchTicketDetailsResponse::PreserveSession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MatchTicketDetailsResponse::TicketSession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MatchTicketDetailsResponse::TargetSession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MatchTicketDetailsResponse::TicketAttributes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
