#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementReward.g.h"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementReward : AchievementRewardT<AchievementReward>
    {
        AchievementReward() = default;

        hstring Name();
        hstring Description();
        hstring Data();
        winrt::Microsoft::Xbox::Services::Achievements::AchievementRewardType RewardType();
        winrt::Windows::Foundation::PropertyType ValuePropertyType();
        winrt::Microsoft::Xbox::Services::Achievements::AchievementMediaAsset MediaAsset();
    };
}
