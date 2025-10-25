#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClip.g.h"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClip : ContextualSearchGameClipT<ContextualSearchGameClip>
    {
        ContextualSearchGameClip() = default;

        hstring ClipName();
        uint64_t DurationInSeconds();
        hstring GameClipId();
        hstring GameClipLocale();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipUriInfo> GameClipUris();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipThumbnail> Thumbnails();
        winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipType GameClipType();
        uint64_t Views();
        hstring XboxUserId();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchGameClipStat> Stats();
    };
}
