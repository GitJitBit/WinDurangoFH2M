#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionRoleTypes.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionRoleTypes : MultiplayerSessionRoleTypesT<MultiplayerSessionRoleTypes>
    {
        MultiplayerSessionRoleTypes() = default;

        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> RoleTypes();
    };
}
