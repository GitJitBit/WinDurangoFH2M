#include "pch.h"
#include "Windows.Xbox.Achievements.AchievementUnlockedEventArgs.h"
#include "Windows.Xbox.Achievements.AchievementUnlockedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    winrt::Windows::Xbox::System::User AchievementUnlockedEventArgs::User()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AchievementUnlockedEventArgs::TitleId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AchievementUnlockedEventArgs::ServiceConfigurationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AchievementUnlockedEventArgs::AchievementId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime AchievementUnlockedEventArgs::UnlockTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri AchievementUnlockedEventArgs::ExtendedInfoUrl()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> AchievementUnlockedEventArgs::InAppRewardValue()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
