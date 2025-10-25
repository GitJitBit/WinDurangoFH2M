#pragma once
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.g.h"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    struct MatchTicketDetailsResponse : MatchTicketDetailsResponseT<MatchTicketDetailsResponse>
    {
        MatchTicketDetailsResponse() = default;

        winrt::Microsoft::Xbox::Services::Matchmaking::TicketStatus MatchStatus();
        winrt::Windows::Foundation::TimeSpan EstimatedWaitTime();
        winrt::Microsoft::Xbox::Services::Matchmaking::PreserveSessionMode PreserveSession();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference TicketSession();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference TargetSession();
        hstring TicketAttributes();
    };
}
