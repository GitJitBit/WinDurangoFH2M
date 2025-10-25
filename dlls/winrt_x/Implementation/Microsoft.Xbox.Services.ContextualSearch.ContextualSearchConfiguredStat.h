#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchConfiguredStat.g.h"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchConfiguredStat : ContextualSearchConfiguredStatT<ContextualSearchConfiguredStat>
    {
        ContextualSearchConfiguredStat() = default;

        hstring Name();
        hstring DataType();
        winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchStatVisibility Visibility();
        hstring DisplayName();
        bool CanBeFiltered();
        bool CanBeSorted();
        winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchStatVisibility DisplayType();
        winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> ValueToDisplayName();
        uint64_t RangeMin();
        uint64_t RangeMax();
    };
}
