#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementTitleAssociation.g.h"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementTitleAssociation : AchievementTitleAssociationT<AchievementTitleAssociation>
    {
        AchievementTitleAssociation() = default;

        hstring Name();
        uint32_t TitleId();
    };
}
