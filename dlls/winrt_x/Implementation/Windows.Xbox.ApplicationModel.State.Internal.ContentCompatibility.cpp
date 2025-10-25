#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentCompatibility.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentCompatibility.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::hresult ContentCompatibility::IsContentCompatible(winrt::guid const& contentId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::hresult ContentCompatibility::IsContentCompatible(hstring const& productId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t ContentCompatibility::GetQuickResumeFlags(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ContentCompatibility::IsQuickResumeAllowedForEra(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ContentCompatibility::IsQuickResumeBlockedForGameCore(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::hresult ContentCompatibility::IsXbox360ContentCompatible(winrt::guid const& legacyProductId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ContentCompatibility::GetXbox360StoreIdFromContentId(winrt::guid const& contentId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ContentCompatibility::IsQuickResumeBlockedForServer(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ContentCompatibility::GetMacIdBehaviorForTitleOnServer(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
