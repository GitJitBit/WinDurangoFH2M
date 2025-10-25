#pragma once
#include "Microsoft.Xbox.Services.Matchmaking.MatchmakingService.g.h"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    struct MatchmakingService : MatchmakingServiceT<MatchmakingService>
    {
        MatchmakingService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Matchmaking::CreateMatchTicketResponse> CreateMatchTicketAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference ticketSessionReference, hstring matchmakingServiceConfigurationId, hstring hopperName, winrt::Windows::Foundation::TimeSpan ticketTimeout, winrt::Microsoft::Xbox::Services::Matchmaking::PreserveSessionMode preserveSession, hstring ticketAttributesJson);
        winrt::Windows::Foundation::IAsyncAction DeleteMatchTicketAsync(hstring serviceConfigurationId, hstring hopperName, hstring ticketId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Matchmaking::MatchTicketDetailsResponse> GetMatchTicketDetailsAsync(hstring serviceConfigurationId, hstring hopperName, hstring ticketId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Matchmaking::HopperStatisticsResponse> GetHopperStatisticsAsync(hstring serviceConfigurationId, hstring hopperName);
    };
}
