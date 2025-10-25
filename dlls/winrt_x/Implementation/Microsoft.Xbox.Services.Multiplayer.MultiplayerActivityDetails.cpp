#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerActivityDetails::SessionReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::HandleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::TitleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerActivityDetails::Visibility()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction MultiplayerActivityDetails::JoinRestriction()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool MultiplayerActivityDetails::Closed()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::OwnerXboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::MaxMembersCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::MembersCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::CustomSessionPropertiesJson()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
