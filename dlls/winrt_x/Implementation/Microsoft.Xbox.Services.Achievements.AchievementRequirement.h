#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementRequirement.g.h"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementRequirement : AchievementRequirementT<AchievementRequirement>
    {
        AchievementRequirement() = default;

        hstring Id();
        hstring CurrentProgressValue();
        hstring TargetProgressValue();
    };
}
