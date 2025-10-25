#include "pch.h"
#include "Microsoft.Xbox.Services.Privacy.PrivacyService.h"
#include "Microsoft.Xbox.Services.Privacy.PrivacyService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> PrivacyService::GetAvoidListAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Privacy::PermissionCheckResult> PrivacyService::CheckPermissionWithTargetUserAsync(hstring permissionId, hstring targetXboxUserId)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult>> PrivacyService::CheckMultiplePermissionsWithMultipleTargetUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> permissionIds, winrt::Windows::Foundation::Collections::IVectorView<hstring> targetXboxUserIds)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> PrivacyService::GetMuteListAsync()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
