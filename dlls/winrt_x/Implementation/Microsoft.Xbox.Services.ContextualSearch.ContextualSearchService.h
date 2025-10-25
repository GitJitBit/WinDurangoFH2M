#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchService.g.h"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchService : ContextualSearchServiceT<ContextualSearchService>
    {
        ContextualSearchService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchConfiguredStat>> GetConfigurationAsync(uint32_t titleId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchBroadcast>> GetBroadcastsAsync(uint32_t titleId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchBroadcast>> GetBroadcastsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring searchQuery);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchBroadcast>> GetBroadcastsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring filterStatName, winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchFilterOperator filterOperator, hstring filterStatValue);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipsResult> GetGameClipsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring filterStatName, winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchFilterOperator filterOperator, hstring filterStatValue);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipsResult> GetGameClipsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring searchQuery);
    };
}
