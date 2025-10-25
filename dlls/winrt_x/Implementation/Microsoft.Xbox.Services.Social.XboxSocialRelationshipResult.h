#pragma once
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationshipResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct XboxSocialRelationshipResult : XboxSocialRelationshipResultT<XboxSocialRelationshipResult>
    {
        XboxSocialRelationshipResult() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationship> Items();
        uint32_t TotalCount();
        bool HasNext();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationshipResult> GetNextAsync(uint32_t maxItems);
    };
}
