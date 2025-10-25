#pragma once
#include "Microsoft.Xbox.Services.XboxLiveContext.g.h"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveContext : XboxLiveContextT<XboxLiveContext>
    {
        XboxLiveContext() = default;

        XboxLiveContext(winrt::Windows::Xbox::System::User const& user);
        winrt::Windows::Xbox::System::User User();
        winrt::Microsoft::Xbox::Services::Social::ProfileService ProfileService();
        winrt::Microsoft::Xbox::Services::Social::SocialService SocialService();
        winrt::Microsoft::Xbox::Services::Social::ReputationService ReputationService();
        winrt::Microsoft::Xbox::Services::Achievements::AchievementService AchievementService();
        winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardService LeaderboardService();
        winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsService UserStatisticsService();
        winrt::Microsoft::Xbox::Services::Matchmaking::MatchmakingService MatchmakingService();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerService MultiplayerService();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentService TournamentService();
        winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityService RealTimeActivityService();
        winrt::Microsoft::Xbox::Services::Presence::PresenceService PresenceService();
        winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPlatformService GameServerPlatformService();
        winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageService TitleStorageService();
        winrt::Microsoft::Xbox::Services::Privacy::PrivacyService PrivacyService();
        winrt::Microsoft::Xbox::Services::System::StringService StringService();
        winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchService ContextualSearchService();
        winrt::Microsoft::Xbox::Services::Clubs::ClubsService ClubsService();
        winrt::Microsoft::Xbox::Services::Marketplace::CatalogService CatalogService();
        winrt::Microsoft::Xbox::Services::Marketplace::InventoryService InventoryService();
        winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListService EntertainmentProfileListService();
        winrt::Microsoft::Xbox::Services::XboxLiveContextSettings Settings();
        winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration AppConfig();
    private:
        winrt::Windows::Xbox::System::User m_user{ nullptr };

    };
}
namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveContext : XboxLiveContextT<XboxLiveContext, implementation::XboxLiveContext>
    {
    };
}
