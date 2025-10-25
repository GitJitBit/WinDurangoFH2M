#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallManager.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallManager.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    void ContentInstallManager::StartInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::Uninstall(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::CancelInstall(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::PauseInstall(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::ResumeInstall(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ContentInstallManager::RegistrationAsync(hstring packageInstanceId, uint32_t timeout)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ContentInstallManager::IsInstalled(winrt::guid const& contentId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallQueueItemState ContentInstallManager::GetQueuedItemState(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::hresult ContentInstallManager::GetQueuedItemError(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    float ContentInstallManager::GetQueuedItemInstallationProgress(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::InstallQueueItemInstallationType ContentInstallManager::GetQueuedItemInstallationType(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t ContentInstallManager::GetQueuedItemPackageSize(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t ContentInstallManager::GetQueuedUpdateDiskSpaceRequired(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPackagePersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::DeletePackagePersistentLocalStorageById(winrt::guid const& contentId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPackageSharedStorageInfoById(winrt::guid const& contentId, uint64_t& sharedStorageSize, bool& allocated)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPackageAppSpecificStorageById(hstring const& packageInstanceId, uint64_t& appSpecificSize)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Management::Deployment::RegistrationState ContentInstallManager::GetPackageRegistrationState(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring ContentInstallManager::GetPackageRegionSpecifier(hstring const& packageInstanceId, winrt::Windows::Xbox::Management::Deployment::RegionSpecifierKey const& key, winrt::Windows::Xbox::Management::Deployment::RegionSpecifierType const& type)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::StartPackageCopyFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::StartPackageMoveFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::guid ContentInstallManager::FindDeviceWithAvailableSpaceForQueuedPackage(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::ReQueuePackageInstallToDevice(hstring const& packageInstanceId, winrt::guid const& deviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::StartGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupLanInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueryPackageUpgrade(winrt::guid const& productId, bool& isUpgraded, hstring& upgradedPackageFamilyName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ContentInstallManager::GetInstallingItemCountForDisc(hstring const& discSetId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ContentInstallManager::GetShrinkablePackages()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::GetTrimmedPackageSize(hstring const& packageInstanceId, uint64_t& currentPackageSize, uint64_t& trimmedPackageSize)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::TrimPackage(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::PauseAllInstalls()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::ResumeAllInstalls()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::CancelAllInstalls()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::StartPackageCopyFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId, hstring const& applicationId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::StartPackageMoveFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId, hstring const& applicationId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::StartInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::StartGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value, winrt::guid const& destDeviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated, uint32_t& xcrdId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::DeletePersistentLocalStorageById(hstring const& packageInstanceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::GetPersistentLocalStorageDeviceInfoById(hstring const& packageInstanceId, uint64_t& size, bool& allocated, winrt::guid& deviceId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value, winrt::guid const& destDeviceId, hstring const& applicationId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ContentInstallManager::PreIndexCloudPackage(winrt::guid const& contentId, hstring const& oneStoreProductId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction ContentInstallManager::InstallWithAppInfoAsync(winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo appInfo, bool installDlc)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
