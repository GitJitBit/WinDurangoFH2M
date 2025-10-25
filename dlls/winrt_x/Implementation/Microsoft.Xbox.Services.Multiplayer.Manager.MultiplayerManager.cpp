#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerManager MultiplayerManager::SingletonInstance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::Initialize(hstring const& lobbySessionTemplateName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::FindMatch(hstring const& hopperName, hstring const& attributes, winrt::Windows::Foundation::TimeSpan const& timeout)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::CancelMatch()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(hstring const& handleId, winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(hstring const& handleId, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> const& users)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> const& users)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::InvitePartyToGame()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGameFromLobby(hstring const& sessionTemplateName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGame(hstring const& sessionName, hstring const& sessionTemplateName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGame(hstring const& sessionName, hstring const& sessionTemplateName, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::LeaveGame()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEvent> MultiplayerManager::DoWork()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MatchStatus MultiplayerManager::MatchStatus()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MultiplayerManager::EstimatedMatchWaitTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerLobbySession MultiplayerManager::LobbySession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerGameSession MultiplayerManager::GameSession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::Joinability MultiplayerManager::Joinability()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::SetJoinInProgress(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::Joinability const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool MultiplayerManager::AutoFillMembersDuringMatchmaking()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::AutoFillMembersDuringMatchmaking(bool value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerManager::SetQualityOfServiceMeasurements(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> const& measurements)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
