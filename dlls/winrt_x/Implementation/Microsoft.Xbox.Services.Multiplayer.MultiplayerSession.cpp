#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, bool reserved, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes MultiplayerSession::CompareMultiplayerSessions(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession const& currentSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession const& oldSession)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus MultiplayerSession::ConvertHttpStatusToWriteSessionStatus(int32_t httpStatusCode)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::MultiplayerCorrelationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::SearchHandleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus MultiplayerSession::ArbitrationStatus()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::StartTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::DateOfNextTimer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::DateOfSession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerInitializationStage MultiplayerSession::InitializationStage()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::InitializingStageStartTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSession::InitializingEpisode()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus MultiplayerSession::WriteStatus()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSession::HostCandidates()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSession::SessionReference()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants MultiplayerSession::SessionConstants()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionProperties MultiplayerSession::SessionProperties()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRoleTypes MultiplayerSession::SessionRoleTypes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> MultiplayerSession::Members()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMatchmakingServer MultiplayerSession::MatchmakingServer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionTournamentsServer MultiplayerSession::TournamentsServer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionArbitrationServer MultiplayerSession::ArbitrationServer()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSession::MembersAccepted()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::ServersJson()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::ServersJson(hstring const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::ETag()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes MultiplayerSession::SubscribedChangeTypes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::CurrentUser()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::Branch()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerSession::ChangeNumber()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson, bool initializeRequested)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested, bool joinWithActiveStatus)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetVisibility(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& visibility)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMaxMembersInSession(uint32_t maxMembersInSession)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMutableRoleSettings(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> const& roleTypes)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetTimeouts(winrt::Windows::Foundation::TimeSpan const& memberReservedTimeout, winrt::Windows::Foundation::TimeSpan const& memberInactiveTimeout, winrt::Windows::Foundation::TimeSpan const& memberReadyTimeout, winrt::Windows::Foundation::TimeSpan const& sessionEmptyTimeout)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetArbitrationTimeouts(winrt::Windows::Foundation::TimeSpan const& arbitrationTimeout, winrt::Windows::Foundation::TimeSpan const& forfeitTimeout)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetQualityOfServiceConnectivityMetrics(bool enableLatencyMetric, bool enableBandwidthDownMetric, bool enableBandwidthUpMetric, bool enableCustomMetric)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetManagedInitialization(winrt::Windows::Foundation::TimeSpan const& joinTimeout, winrt::Windows::Foundation::TimeSpan const& measurementTimeout, winrt::Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMemberInitialization(winrt::Windows::Foundation::TimeSpan const& joinTimeout, winrt::Windows::Foundation::TimeSpan const& measurementTimeout, winrt::Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetPeerToPeerRequirements(winrt::Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthMinimumInKilobitsPerSecond)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetPeerToHostRequirements(winrt::Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthDownMinimumInKilobitsPerSecond, uint32_t bandwidthUpMinimumInKilobitsPerSecond, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayMetrics const& hostSelectionMetric)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMeasurementServerAddresses(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::QualityOfServiceServer> const& measurementServerAddresses)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCloudComputePackageJson(hstring const& sessionCloudComputePackageConstantsJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionCapabilities(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionCapabilities const& capabilities)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetInitializationStatus(bool initializationSucceeded)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetHostDeviceToken(hstring const& hostDeviceToken)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingServerConnectionPath(hstring const& serverConnectionPath)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetClosed(bool closed)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetLocked(bool locked)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetAllocateCloudCompute(bool allocateCloudCompute)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingResubmit(bool matchResubmit)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetServerConnectionStringCandidates(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& serverConnectionStringCandidates)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionChangeSubscription(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes const& changeTypes)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::Leave()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserStatus(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus const& status)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserSecureDeviceAddressBase64(hstring const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserRoleInfo(winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> const& roles)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserMembersInGroup(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> const& membersInGroup)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserQualityOfServiceMeasurements(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> const& measurements)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserQualityOfServiceServerMeasurementsJson(hstring const& valueJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserArbitrationResults(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> const& results)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserMemberCustomPropertyJson(hstring const& name, hstring const& valueJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::DeleteCurrentUserMemberCustomPropertyJson(hstring const& name)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingTargetSessionConstantsJson(hstring const& matchmakingTargetSessionConstants)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionCustomPropertyJson(hstring const& name, hstring const& valueJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::DeleteSessionCustomPropertyJson(hstring const& name)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerSession::_Init(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
