#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerActivityDetails : MultiplayerActivityDetailsT<MultiplayerActivityDetails>
    {
        MultiplayerActivityDetails() = default;

        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        hstring HandleId();
        uint32_t TitleId();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility Visibility();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction JoinRestriction();
        bool Closed();
        hstring OwnerXboxUserId();
        uint32_t MaxMembersCount();
        uint32_t MembersCount();
        hstring CustomSessionPropertiesJson();
    };
}
