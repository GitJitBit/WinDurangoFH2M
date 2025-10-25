#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::Find(winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByDeviceId(winrt::guid const& deviceId, winrt::Windows::Xbox::ApplicationModel::State::Internal::FindPackageInfoFilter const& filter)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByContentId(winrt::guid const& contentId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByProductId(winrt::guid const& productId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByTitleId(uint32_t titleId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByAllowedProductId(winrt::guid const& allowedProductId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindByPackageInstanceId(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindUniversalPackagesByFamilyName(hstring const& packageFamilyName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByAllowedPackageFamilyName(hstring const& allowedPackageFamilyName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindUnparented()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindByFullName(hstring const& fullName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindByTitleSearchString(hstring const& searchString, uint32_t maxResults)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo PackageInfo::FindGameHub(winrt::guid const& gameHubId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::ApplicationModel::State::Internal::IPackageInfo> PackageInfo::FindPackagesForGameHub(winrt::guid const& gameHubId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
