#pragma once
#include "Microsoft.Xbox.Services.Matchmaking.CreateMatchTicketResponse.g.h"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    struct CreateMatchTicketResponse : CreateMatchTicketResponseT<CreateMatchTicketResponse>
    {
        CreateMatchTicketResponse() = default;

        hstring MatchTicketId();
        winrt::Windows::Foundation::TimeSpan EstimatedWaitTime();
    };
}
