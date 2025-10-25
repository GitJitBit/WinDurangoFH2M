#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementTimeWindow.g.h"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementTimeWindow : AchievementTimeWindowT<AchievementTimeWindow>
    {
        AchievementTimeWindow() = default;

        winrt::Windows::Foundation::DateTime StartDate();
        winrt::Windows::Foundation::DateTime EndDate();
    };
}
