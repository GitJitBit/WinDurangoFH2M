#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.g.h"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct UserStatisticsService : UserStatisticsServiceT<UserStatisticsService>
    {
        UserStatisticsService() = default;

        winrt::event_token StatisticChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::UserStatistics::StatisticChangeEventArgs> const& __param0);
        void StatisticChanged(winrt::event_token const& __param0) noexcept;
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult> GetSingleUserStatisticsAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult> GetSingleUserStatisticsAsync(hstring xboxUserId, hstring serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> statisticNames);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult>> GetMultipleUserStatisticsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, hstring serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> statisticNames);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult>> GetMultipleUserStatisticsForMultipleServiceConfigurationsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::RequestedStatistics> requestedServiceConfigurationStatisticsCollection);
        winrt::Microsoft::Xbox::Services::UserStatistics::StatisticChangeSubscription SubscribeToStatisticChange(hstring const& xboxUserId, hstring const& serviceConfigurationId, hstring const& statisticName);
        void UnsubscribeFromStatisticChange(winrt::Microsoft::Xbox::Services::UserStatistics::StatisticChangeSubscription const& subscription);
    };
}
