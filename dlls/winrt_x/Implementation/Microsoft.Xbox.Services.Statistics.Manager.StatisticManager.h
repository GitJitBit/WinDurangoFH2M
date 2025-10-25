#pragma once
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticManager.g.h"


namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    struct StatisticManager : StatisticManagerT<StatisticManager>
    {
        StatisticManager() = default;

        static winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticManager SingletonInstance();
        void AddLocalUser(winrt::Windows::Xbox::System::User const& user);
        void RemoveLocalUser(winrt::Windows::Xbox::System::User const& user);
        void RequestFlushToService(winrt::Windows::Xbox::System::User const& user);
        void RequestFlushToService(winrt::Windows::Xbox::System::User const& user, bool isHighPriority);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEvent> DoWork();
        void SetStatisticNumberData(winrt::Windows::Xbox::System::User const& user, hstring const& name, double value);
        void SetStatisticIntegerData(winrt::Windows::Xbox::System::User const& user, hstring const& name, int64_t value);
        void SetStatisticStringData(winrt::Windows::Xbox::System::User const& user, hstring const& name, hstring const& value);
        winrt::Windows::Foundation::Collections::IVectorView<hstring> GetStatisticNames(winrt::Windows::Xbox::System::User const& user);
        winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticValue GetStatistic(winrt::Windows::Xbox::System::User const& user, hstring const& name);
        void DeleteStatistic(winrt::Windows::Xbox::System::User const& user, hstring const& name);
        void GetLeaderboard(winrt::Windows::Xbox::System::User const& user, hstring const& statName, winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery const& query);
        void GetSocialLeaderboard(winrt::Windows::Xbox::System::User const& user, hstring const& statName, hstring const& socialGroup, winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery const& query);
    };
}
namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::factory_implementation
{
    struct StatisticManager : StatisticManagerT<StatisticManager, implementation::StatisticManager>
    {
    };
}
