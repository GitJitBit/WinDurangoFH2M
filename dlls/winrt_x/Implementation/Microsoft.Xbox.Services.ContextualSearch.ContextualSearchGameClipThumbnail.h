#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipThumbnail.g.h"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClipThumbnail : ContextualSearchGameClipThumbnailT<ContextualSearchGameClipThumbnail>
    {
        ContextualSearchGameClipThumbnail() = default;

        winrt::Windows::Foundation::Uri Url();
        uint64_t FileSize();
        winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipThumbnailType ThumbnailType();
    };
}
