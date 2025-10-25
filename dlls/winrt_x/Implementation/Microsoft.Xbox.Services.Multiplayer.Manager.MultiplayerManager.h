#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerManager : MultiplayerManagerT<MultiplayerManager>
    {
        MultiplayerManager() = default;

        static winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerManager SingletonInstance();
        void Initialize(hstring const& lobbySessionTemplateName);
        void FindMatch(hstring const& hopperName, hstring const& attributes, winrt::Windows::Foundation::TimeSpan const& timeout);
        void CancelMatch();
        void JoinLobby(hstring const& handleId, winrt::Windows::Xbox::System::User const& user);
        void JoinLobby(hstring const& handleId, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> const& users);
        void JoinLobby(winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> const& users);
        void JoinLobby(winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, winrt::Windows::Xbox::System::User const& user);
        void InvitePartyToGame();
        void JoinGameFromLobby(hstring const& sessionTemplateName);
        void JoinGame(hstring const& sessionName, hstring const& sessionTemplateName);
        void JoinGame(hstring const& sessionName, hstring const& sessionTemplateName, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds);
        void LeaveGame();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEvent> DoWork();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MatchStatus MatchStatus();
        winrt::Windows::Foundation::TimeSpan EstimatedMatchWaitTime();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerLobbySession LobbySession();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerGameSession GameSession();
        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::Joinability Joinability();
        void SetJoinInProgress(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::Joinability const& value);
        bool AutoFillMembersDuringMatchmaking();
        void AutoFillMembersDuringMatchmaking(bool value);
        void SetQualityOfServiceMeasurements(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> const& measurements);
    };
}
namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::factory_implementation
{
    struct MultiplayerManager : MultiplayerManagerT<MultiplayerManager, implementation::MultiplayerManager>
    {
    };
}
