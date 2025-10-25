#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleType.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerRoleType : MultiplayerRoleTypeT<MultiplayerRoleType>
    {
        MultiplayerRoleType() = default;

        bool OwnerManaged();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MutableRoleSetting> MutableRoleSettings();
        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleInfo> Roles();
        void Roles(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleInfo> const& roles);
    };
}
namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerRoleType : MultiplayerRoleTypeT<MultiplayerRoleType, implementation::MultiplayerRoleType>
    {
    };
}
