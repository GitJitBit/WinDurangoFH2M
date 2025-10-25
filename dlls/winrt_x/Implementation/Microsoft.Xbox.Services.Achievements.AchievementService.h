#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementService.g.h"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementService : AchievementServiceT<AchievementService>
    {
        AchievementService() = default;

        winrt::Windows::Foundation::IAsyncAction UpdateAchievementAsync(hstring xboxUserId, hstring achievementId, uint32_t percentComplete);
        winrt::Windows::Foundation::IAsyncAction UpdateAchievementAsync(hstring xboxUserId, uint32_t titleId, hstring serviceConfigurationId, hstring achievementId, uint32_t percentComplete);
        winrt::Windows::Foundation::IAsyncOperation<int32_t> TryUpdateAchievementAsync(hstring xboxUserId, hstring achievementId, uint32_t percentComplete);
        winrt::Windows::Foundation::IAsyncOperation<int32_t> TryUpdateAchievementAsync(hstring xboxUserId, uint32_t titleId, hstring serviceConfigurationId, hstring achievementId, uint32_t percentComplete);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Achievements::AchievementsResult> GetAchievementsForTitleIdAsync(hstring xboxUserId, uint32_t titleId, winrt::Microsoft::Xbox::Services::Achievements::AchievementType type, bool unlockedOnly, winrt::Microsoft::Xbox::Services::Achievements::AchievementOrderBy orderBy, uint32_t skipItems, uint32_t maxItems);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Achievements::Achievement> GetAchievementAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring achievementId);
    };
}
