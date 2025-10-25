#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.AppInfo.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct AppInfo
    {
        AppInfo() = default;

        static winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo FindByAumid(hstring const& aumid);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo> FindByTitleId(uint32_t titleId);
    };
}
namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct AppInfo : AppInfoT<AppInfo, implementation::AppInfo>
    {
    };
}
