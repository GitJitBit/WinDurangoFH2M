#pragma once
#include "Microsoft.Xbox.Services.Privacy.PrivacyService.g.h"


namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    struct PrivacyService : PrivacyServiceT<PrivacyService>
    {
        PrivacyService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> GetAvoidListAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Privacy::PermissionCheckResult> CheckPermissionWithTargetUserAsync(hstring permissionId, hstring targetXboxUserId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Privacy::MultiplePermissionsCheckResult>> CheckMultiplePermissionsWithMultipleTargetUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> permissionIds, winrt::Windows::Foundation::Collections::IVectorView<hstring> targetXboxUserIds);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> GetMuteListAsync();
    };
}
