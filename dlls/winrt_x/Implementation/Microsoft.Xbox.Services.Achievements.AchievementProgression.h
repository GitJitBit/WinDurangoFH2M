#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementProgression.g.h"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementProgression : AchievementProgressionT<AchievementProgression>
    {
        AchievementProgression() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementRequirement> Requirements();
        winrt::Windows::Foundation::DateTime TimeUnlocked();
    };
}
