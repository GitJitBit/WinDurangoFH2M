#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionMember : MultiplayerSessionMemberT<MultiplayerSessionMember>
    {
        MultiplayerSessionMember() = default;

        uint32_t MemberId();
        hstring TeamId();
        hstring XboxUserId();
        hstring MemberCustomConstantsJson();
        hstring SecureDeviceAddressBase64();
        winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> Roles();
        hstring MemberCustomPropertiesJson();
        hstring Gamertag();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus Status();
        bool IsTurnAvailable();
        bool IsCurrentUser();
        bool InitializeRequested();
        hstring MatchmakingResultServerMeasurementsJson();
        hstring MemberServerMeasurementsJson();
        winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> MembersInGroup();
        winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> MemberMeasurements();
        hstring DeviceToken();
        winrt::Microsoft::Xbox::Services::Multiplayer::NetworkAddressTranslationSetting Nat();
        uint32_t ActiveTitleId();
        uint32_t InitializationEpisode();
        winrt::Windows::Foundation::DateTime JoinTime();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerMeasurementFailure InitializationFailureCause();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference TournamentTeamSessionRef();
        winrt::Windows::Foundation::Collections::IVector<hstring> Groups();
        void Groups(winrt::Windows::Foundation::Collections::IVector<hstring> const& value);
        winrt::Windows::Foundation::Collections::IVector<hstring> Encounters();
        void Encounters(winrt::Windows::Foundation::Collections::IVector<hstring> const& value);
        winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> Results();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus ArbitrationStatus();
    };
}
