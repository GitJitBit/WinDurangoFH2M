#pragma once
#include "Microsoft.Xbox.Services.Achievements.AchievementsResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    struct AchievementsResult : AchievementsResultT<AchievementsResult>
    {
        AchievementsResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::Achievement> Items();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Achievements::AchievementsResult> GetNextAsync(uint32_t maxItems);
        bool HasNext();
    };
}
