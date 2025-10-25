#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardColumn::DisplayName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring LeaderboardColumn::StatisticName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::PropertyType LeaderboardColumn::StatisticType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
