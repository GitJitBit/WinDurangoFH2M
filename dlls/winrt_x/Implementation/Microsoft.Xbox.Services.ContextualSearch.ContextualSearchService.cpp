#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchService.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchConfiguredStat>> ContextualSearchService::GetConfigurationAsync(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchBroadcast>> ContextualSearchService::GetBroadcastsAsync(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchBroadcast>> ContextualSearchService::GetBroadcastsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring searchQuery)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchBroadcast>> ContextualSearchService::GetBroadcastsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring filterStatName, winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchFilterOperator filterOperator, hstring filterStatValue)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipsResult> ContextualSearchService::GetGameClipsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring filterStatName, winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchFilterOperator filterOperator, hstring filterStatValue)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipsResult> ContextualSearchService::GetGameClipsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring searchQuery)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
