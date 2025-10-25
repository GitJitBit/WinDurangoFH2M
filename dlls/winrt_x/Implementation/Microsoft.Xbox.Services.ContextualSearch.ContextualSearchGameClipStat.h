#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipStat.g.h"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClipStat : ContextualSearchGameClipStatT<ContextualSearchGameClipStat>
    {
        ContextualSearchGameClipStat() = default;

        hstring Name();
        hstring Value();
        hstring MinValue();
        hstring MaxValue();
        hstring DeltaValue();
    };
}
