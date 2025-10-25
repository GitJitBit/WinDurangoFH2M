#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerGameSession.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerGameSession : MultiplayerGameSessionT<MultiplayerGameSession>
    {
        MultiplayerGameSession() = default;

        hstring CorrelationId();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> Members();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember Host();
        hstring Properties();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants SessionConstants();
        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference> TournamentTeams();
        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> TournamentTeamResults();
        bool IsHost(hstring const& xboxUserId);
        void SetProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context);
        void SetSynchronizedProperties(hstring const& name, hstring const& valueJson, winrt::Windows::Foundation::IInspectable const& context);
        void SetSynchronizedHost(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember const& gameHost, winrt::Windows::Foundation::IInspectable const& context);
    };
}
