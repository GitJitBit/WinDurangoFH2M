#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionConstants.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionConstants : MultiplayerSessionConstantsT<MultiplayerSessionConstants>
    {
        MultiplayerSessionConstants() = default;

        uint32_t MaxMembersInSession();
        void MaxMembersInSession(uint32_t value);
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerSessionVisibility();
        void MultiplayerSessionVisibility(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& value);
        winrt::Windows::Foundation::Collections::IVectorView<hstring> InitiatorXboxUserIds();
        hstring CustomConstantsJson();
        winrt::Windows::Foundation::TimeSpan MemberReservationTimeout();
        winrt::Windows::Foundation::TimeSpan MemberInactiveTimeout();
        winrt::Windows::Foundation::TimeSpan MemberReadyTimeout();
        winrt::Windows::Foundation::TimeSpan SessionEmptyTimeout();
        winrt::Windows::Foundation::TimeSpan ArbitrationTimeout();
        winrt::Windows::Foundation::TimeSpan ForfeitTimeout();
        bool CapabilitiesConnectivity();
        bool CapabilitiesSuppressPresenceActivityCheck();
        bool CapabilitiesGameplay();
        bool CapabilitiesLarge();
        bool CapabilitiesConnectionRequiredForActiveMember();
        bool CapabilitiesCrossplay();
        bool CapabilitiesUserAuthorizationStyle();
        bool CapabilitiesTeam();
        bool CapabilitiesSearchable();
        bool CapabilitiesArbitration();
        bool EnableMetricsLatency();
        bool EnableMetricsBandwidthDown();
        bool EnableMetricsBandwidthUp();
        bool EnableMetricsCustom();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerManagedInitialization ManagedInitialization();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerMemberInitialization MemberInitialization();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerPeerToPeerRequirements PeerToPeerRequirements();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerPeerToHostRequirements PeerToHostRequirements();
        hstring MeasurementServerAddressesJson();
    };
}
