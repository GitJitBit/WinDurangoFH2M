#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState TeamChangeSubscription::State()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::OrganizerId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::TournamentId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TeamChangeSubscription::TeamId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
