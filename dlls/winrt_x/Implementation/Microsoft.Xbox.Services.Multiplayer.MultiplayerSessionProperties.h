#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionProperties : MultiplayerSessionPropertiesT<MultiplayerSessionProperties>
    {
        MultiplayerSessionProperties() = default;

        winrt::Windows::Foundation::Collections::IVectorView<hstring> Keywords();
        void Keywords(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value);
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction JoinRestriction();
        void JoinRestriction(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction const& value);
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction ReadRestriction();
        void ReadRestriction(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction const& value);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> TurnCollection();
        void TurnCollection(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> const& value);
        hstring MatchmakingTargetSessionConstantsJson();
        hstring SessionCustomPropertiesJson();
        hstring MatchmakingServerConnectionString();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> ServerConnectionStringCandidates();
        winrt::Windows::Foundation::Collections::IVectorView<uint32_t> SessionOwnerIndices();
        hstring HostDeviceToken();
        bool Closed();
        bool Locked();
        bool AllocateCloudCompute();
    };
}
