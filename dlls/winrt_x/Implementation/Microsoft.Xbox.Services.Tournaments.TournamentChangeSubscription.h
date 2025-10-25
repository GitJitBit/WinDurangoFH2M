#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeSubscription.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentChangeSubscription : TournamentChangeSubscriptionT<TournamentChangeSubscription>
    {
        TournamentChangeSubscription() = default;

        winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring OrganizerId();
        hstring TournamentId();
    };
}
