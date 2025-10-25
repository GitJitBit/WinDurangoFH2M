#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.g.h"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchBroadcast : ContextualSearchBroadcastT<ContextualSearchBroadcast>
    {
        ContextualSearchBroadcast() = default;

        hstring XboxUserId();
        hstring Provider();
        hstring BroadcasterIdFromProvider();
        uint64_t Viewers();
        winrt::Windows::Foundation::DateTime StartedDate();
        winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> CurrentStats();
    };
}
