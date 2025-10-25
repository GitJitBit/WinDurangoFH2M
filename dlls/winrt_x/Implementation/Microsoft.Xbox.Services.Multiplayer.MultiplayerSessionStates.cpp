#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::DateTime MultiplayerSessionStates::StartTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionStates::SessionReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStatus MultiplayerSessionStates::Status()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerSessionStates::Visibility()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool MultiplayerSessionStates::IsMyTurn()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionStates::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSessionStates::AcceptedMemberCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction MultiplayerSessionStates::JoinRestriction()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionStates::Keywords()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
