#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipsResult.g.h"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClipsResult : ContextualSearchGameClipsResultT<ContextualSearchGameClipsResult>
    {
        ContextualSearchGameClipsResult() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipsResult> GetNextAsync(uint32_t maxItems);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClip> Items();
    };
}
