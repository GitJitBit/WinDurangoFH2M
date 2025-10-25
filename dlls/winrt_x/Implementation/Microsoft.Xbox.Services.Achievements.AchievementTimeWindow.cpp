#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTimeWindow.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTimeWindow.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    winrt::Windows::Foundation::DateTime AchievementTimeWindow::StartDate()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime AchievementTimeWindow::EndDate()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
