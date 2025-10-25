#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct PackageInfo
    {
        PackageInfo() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> Find(winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindByDeviceId(winrt::guid const& deviceId, winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindByContentId(winrt::guid const& contentId);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindByProductId(winrt::guid const& productId);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindByTitleId(uint32_t titleId);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindByAllowedProductId(winrt::guid const& allowedProductId);
        static winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo FindByPackageInstanceId(hstring const& packageInstanceId);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindUniversalPackagesByFamilyName(hstring const& packageFamilyName);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindByAllowedPackageFamilyName(hstring const& allowedPackageFamilyName);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindUnparented();
        static winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo FindByFullName(hstring const& fullName);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindByTitleSearchString(hstring const& searchString, uint32_t maxResults);
        static winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo FindGameHub(winrt::guid const& gameHubId);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> FindPackagesForGameHub(winrt::guid const& gameHubId);
    };
}
namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct PackageInfo : PackageInfoT<PackageInfo, implementation::PackageInfo>
    {
    };
}
