#include "pch.h"
#include "Windows.Xbox.Achievements.AchievementSource.h"
#include "Windows.Xbox.Achievements.AchievementSource.g.cpp"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    winrt::event_token AchievementSource::AchievementUnlocked(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Achievements::AchievementUnlockedEventArgs> const& handler)
    {
        return m_achievementUnlockedEvent.add(handler);
    }
    void AchievementSource::AchievementUnlocked(winrt::event_token const& token) noexcept
    {
        m_achievementUnlockedEvent.remove(token);
    }
}
