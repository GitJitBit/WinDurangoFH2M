#pragma once
#include "Microsoft.Xbox.Services.Tournaments.Tournament.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct Tournament : TournamentT<Tournament>
    {
        Tournament() = default;

        hstring Id();
        hstring OrganizerId();
        hstring OrganizerName();
        hstring Name();
        hstring Description();
        hstring GameMode();
        hstring TournamentStyle();
        bool IsRegistrationOpen();
        bool IsCheckinOpen();
        bool IsPlayingOpen();
        bool HasPrize();
        bool IsPaused();
        uint32_t MinTeamSize();
        uint32_t MaxTeamSize();
        uint32_t TeamsRegisteredCount();
        uint32_t MinTeamsRegistered();
        uint32_t MaxTeamsRegistered();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentState TournamentState();
        winrt::Windows::Foundation::DateTime RegistrationStartTime();
        winrt::Windows::Foundation::DateTime RegistrationEndTime();
        winrt::Windows::Foundation::DateTime CheckinStartTime();
        winrt::Windows::Foundation::DateTime CheckinEndTime();
        winrt::Windows::Foundation::DateTime PlayingStartTime();
        winrt::Windows::Foundation::DateTime PlayingEndTime();
        winrt::Windows::Foundation::DateTime EndTime();
        winrt::Microsoft::Xbox::Services::Tournaments::TeamSummary TeamSummary();
    };
}
