#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticManager.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticManager.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticManager StatisticManager::SingletonInstance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::AddLocalUser(winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::RemoveLocalUser(winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::RequestFlushToService(winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::RequestFlushToService(winrt::Windows::Xbox::System::User const& user, bool isHighPriority)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEvent> StatisticManager::DoWork()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::SetStatisticNumberData(winrt::Windows::Xbox::System::User const& user, hstring const& name, double value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::SetStatisticIntegerData(winrt::Windows::Xbox::System::User const& user, hstring const& name, int64_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::SetStatisticStringData(winrt::Windows::Xbox::System::User const& user, hstring const& name, hstring const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> StatisticManager::GetStatisticNames(winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticValue StatisticManager::GetStatistic(winrt::Windows::Xbox::System::User const& user, hstring const& name)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::DeleteStatistic(winrt::Windows::Xbox::System::User const& user, hstring const& name)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::GetLeaderboard(winrt::Windows::Xbox::System::User const& user, hstring const& statName, winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery const& query)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void StatisticManager::GetSocialLeaderboard(winrt::Windows::Xbox::System::User const& user, hstring const& statName, hstring const& socialGroup, winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery const& query)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
