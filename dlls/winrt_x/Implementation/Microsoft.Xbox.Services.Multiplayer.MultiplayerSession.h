#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSession : MultiplayerSessionT<MultiplayerSession>
    {
        MultiplayerSession() = default;

        MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext);
        MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, bool reserved, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);
        MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);
        MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference);
        static winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes CompareMultiplayerSessions(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession const& currentSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession const& oldSession);
        static winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus ConvertHttpStatusToWriteSessionStatus(int32_t httpStatusCode);
        hstring MultiplayerCorrelationId();
        hstring SearchHandleId();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus ArbitrationStatus();
        winrt::Windows::Foundation::DateTime StartTime();
        winrt::Windows::Foundation::DateTime DateOfNextTimer();
        winrt::Windows::Foundation::DateTime DateOfSession();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerInitializationStage InitializationStage();
        winrt::Windows::Foundation::DateTime InitializingStageStartTime();
        uint32_t InitializingEpisode();
        winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus WriteStatus();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> HostCandidates();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference SessionReference();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants SessionConstants();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionProperties SessionProperties();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRoleTypes SessionRoleTypes();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> Members();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMatchmakingServer MatchmakingServer();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionTournamentsServer TournamentsServer();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionArbitrationServer ArbitrationServer();
        uint32_t MembersAccepted();
        hstring ServersJson();
        void ServersJson(hstring const& value);
        hstring ETag();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes SubscribedChangeTypes();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember CurrentUser();
        hstring Branch();
        uint64_t ChangeNumber();
        void AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson);
        void AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson, bool initializeRequested);
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember Join();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson);
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson, bool initializeRequested);
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson, bool initializeRequested, bool joinWithActiveStatus);
        void SetVisibility(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& visibility);
        void SetMaxMembersInSession(uint32_t maxMembersInSession);
        void SetMutableRoleSettings(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> const& roleTypes);
        void SetTimeouts(winrt::Windows::Foundation::TimeSpan const& memberReservedTimeout, winrt::Windows::Foundation::TimeSpan const& memberInactiveTimeout, winrt::Windows::Foundation::TimeSpan const& memberReadyTimeout, winrt::Windows::Foundation::TimeSpan const& sessionEmptyTimeout);
        void SetArbitrationTimeouts(winrt::Windows::Foundation::TimeSpan const& arbitrationTimeout, winrt::Windows::Foundation::TimeSpan const& forfeitTimeout);
        void SetQualityOfServiceConnectivityMetrics(bool enableLatencyMetric, bool enableBandwidthDownMetric, bool enableBandwidthUpMetric, bool enableCustomMetric);
        void SetManagedInitialization(winrt::Windows::Foundation::TimeSpan const& joinTimeout, winrt::Windows::Foundation::TimeSpan const& measurementTimeout, winrt::Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart);
        void SetMemberInitialization(winrt::Windows::Foundation::TimeSpan const& joinTimeout, winrt::Windows::Foundation::TimeSpan const& measurementTimeout, winrt::Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart);
        void SetPeerToPeerRequirements(winrt::Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthMinimumInKilobitsPerSecond);
        void SetPeerToHostRequirements(winrt::Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthDownMinimumInKilobitsPerSecond, uint32_t bandwidthUpMinimumInKilobitsPerSecond, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayMetrics const& hostSelectionMetric);
        void SetMeasurementServerAddresses(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::QualityOfServiceServer> const& measurementServerAddresses);
        void SetCloudComputePackageJson(hstring const& sessionCloudComputePackageConstantsJson);
        void SetSessionCapabilities(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionCapabilities const& capabilities);
        void SetInitializationStatus(bool initializationSucceeded);
        void SetHostDeviceToken(hstring const& hostDeviceToken);
        void SetMatchmakingServerConnectionPath(hstring const& serverConnectionPath);
        void SetClosed(bool closed);
        void SetLocked(bool locked);
        void SetAllocateCloudCompute(bool allocateCloudCompute);
        void SetMatchmakingResubmit(bool matchResubmit);
        void SetServerConnectionStringCandidates(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& serverConnectionStringCandidates);
        void SetSessionChangeSubscription(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes const& changeTypes);
        void Leave();
        void SetCurrentUserStatus(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus const& status);
        void SetCurrentUserSecureDeviceAddressBase64(hstring const& value);
        void SetCurrentUserRoleInfo(winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> const& roles);
        void SetCurrentUserMembersInGroup(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> const& membersInGroup);
        void SetCurrentUserQualityOfServiceMeasurements(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> const& measurements);
        void SetCurrentUserQualityOfServiceServerMeasurementsJson(hstring const& valueJson);
        void SetCurrentUserArbitrationResults(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> const& results);
        void SetCurrentUserMemberCustomPropertyJson(hstring const& name, hstring const& valueJson);
        void DeleteCurrentUserMemberCustomPropertyJson(hstring const& name);
        void SetMatchmakingTargetSessionConstantsJson(hstring const& matchmakingTargetSessionConstants);
        void SetSessionCustomPropertyJson(hstring const& name, hstring const& valueJson);
        void DeleteSessionCustomPropertyJson(hstring const& name);
        void _Init(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);
    };
}
namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerSession : MultiplayerSessionT<MultiplayerSession, implementation::MultiplayerSession>
    {
    };
}
