#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchmakingService.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchmakingService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Matchmaking::CreateMatchTicketResponse> MatchmakingService::CreateMatchTicketAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference ticketSessionReference, hstring matchmakingServiceConfigurationId, hstring hopperName, winrt::Windows::Foundation::TimeSpan ticketTimeout, winrt::Microsoft::Xbox::Services::Matchmaking::PreserveSessionMode preserveSession, hstring ticketAttributesJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction MatchmakingService::DeleteMatchTicketAsync(hstring serviceConfigurationId, hstring hopperName, hstring ticketId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Matchmaking::MatchTicketDetailsResponse> MatchmakingService::GetMatchTicketDetailsAsync(hstring serviceConfigurationId, hstring hopperName, hstring ticketId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Matchmaking::HopperStatisticsResponse> MatchmakingService::GetHopperStatisticsAsync(hstring serviceConfigurationId, hstring hopperName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
