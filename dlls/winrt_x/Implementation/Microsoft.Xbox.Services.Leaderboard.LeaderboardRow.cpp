#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardRow::Gamertag()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring LeaderboardRow::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    double LeaderboardRow::Percentile()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t LeaderboardRow::Rank()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> LeaderboardRow::Values()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
