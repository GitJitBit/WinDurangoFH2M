#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleDetails.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSearchHandleDetails : MultiplayerSearchHandleDetailsT<MultiplayerSearchHandleDetails>
    {
        MultiplayerSearchHandleDetails() = default;

        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        hstring HandleId();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> SessionOwnerXboxUserIds();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> Tags();
        winrt::Windows::Foundation::Collections::IMapView<hstring, double> NumbersMetadata();
        winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> StringsMetadata();
        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> RoleTypes();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility Visibility();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction JoinRestriction();
        bool Closed();
        uint32_t MaxMembersCount();
        uint32_t MembersCount();
        winrt::Windows::Foundation::DateTime HandleCreationTime();
        hstring CustomSessionPropertiesJson();
    };
}
