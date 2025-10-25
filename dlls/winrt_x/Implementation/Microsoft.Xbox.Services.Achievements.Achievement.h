#pragma once
#include "Microsoft.Xbox.Services.Achievements.Achievement.g.h"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct Achievement : AchievementT<Achievement>
    {
        Achievement() = default;

        hstring Id();
        hstring ServiceConfigurationId();
        hstring Name();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementTitleAssociation> TitleAssociations();
        winrt::Microsoft::Xbox::Services::Achievements::AchievementProgressState ProgressState();
        winrt::Microsoft::Xbox::Services::Achievements::AchievementProgression Progression();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementMediaAsset> MediaAssets();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> PlatformsAvailableOn();
        bool IsSecret();
        hstring UnlockedDescription();
        hstring LockedDescription();
        hstring ProductId();
        winrt::Microsoft::Xbox::Services::Achievements::AchievementType AchievementType();
        winrt::Microsoft::Xbox::Services::Achievements::AchievementParticipationType ParticipationType();
        winrt::Microsoft::Xbox::Services::Achievements::AchievementTimeWindow Available();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementReward> Rewards();
        winrt::Windows::Foundation::TimeSpan EstimatedUnlockTime();
        hstring DeepLink();
        bool IsRevoked();
    };
}
