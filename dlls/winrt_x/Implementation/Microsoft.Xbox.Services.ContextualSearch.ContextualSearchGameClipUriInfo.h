#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipUriInfo.g.h"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClipUriInfo : ContextualSearchGameClipUriInfoT<ContextualSearchGameClipUriInfo>
    {
        ContextualSearchGameClipUriInfo() = default;

        winrt::Windows::Foundation::Uri Url();
        uint64_t FileSize();
        winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipUriType UriType();
        winrt::Windows::Foundation::DateTime Expiration();
    };
}
