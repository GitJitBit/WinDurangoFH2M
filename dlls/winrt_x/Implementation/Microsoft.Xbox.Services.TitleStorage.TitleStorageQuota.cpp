#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageQuota.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageQuota.g.cpp"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    hstring TitleStorageQuota::ServiceConfigurationId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType TitleStorageQuota::StorageType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageQuota::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageQuota::MultiplayerSessionTemplateName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageQuota::MultiplayerSessionName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t TitleStorageQuota::UsedBytes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t TitleStorageQuota::QuotaBytes()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
