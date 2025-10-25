#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentService.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentService : TournamentServiceT<TournamentService>
    {
        TournamentService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TournamentRequestResult> GetTournamentsAsync(winrt::Microsoft::Xbox::Services::Tournaments::TournamentRequest request);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::Tournament> GetTournamentDetailsAsync(hstring organizerId, hstring tournamentId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TeamRequestResult> GetTeamsAsync(winrt::Microsoft::Xbox::Services::Tournaments::TeamRequest request);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Tournaments::TeamInfo> GetTeamDetailsAsync(hstring organizerId, hstring tournamentId, hstring teamId);
        winrt::event_token TeamChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Tournaments::TeamChangeEventArgs> const& __param0);
        void TeamChanged(winrt::event_token const& __param0) noexcept;
        winrt::Microsoft::Xbox::Services::Tournaments::TeamChangeSubscription SubscribeToTeamChange(hstring const& organizerId, hstring const& tournamentId, hstring const& teamId);
        void UnsubscribeFromTeamChange(winrt::Microsoft::Xbox::Services::Tournaments::TeamChangeSubscription const& subscription);
    };
}
