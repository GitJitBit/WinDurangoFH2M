#pragma once
#include "Windows.Xbox.Achievements.AchievementSource.g.h"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    struct AchievementSource : AchievementSourceT<AchievementSource>
    {
        AchievementSource() = default;

        winrt::event_token AchievementUnlocked(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Achievements::AchievementUnlockedEventArgs> const& handler);
        void AchievementUnlocked(winrt::event_token const& token) noexcept;

    private:
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Achievements::AchievementUnlockedEventArgs>> m_achievementUnlockedEvent;
    };
}
