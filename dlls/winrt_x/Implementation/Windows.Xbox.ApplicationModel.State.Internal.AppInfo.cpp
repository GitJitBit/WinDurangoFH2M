#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.AppInfo.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.AppInfo.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo AppInfo::FindByAumid(hstring const& aumid)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo> AppInfo::FindByTitleId(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
