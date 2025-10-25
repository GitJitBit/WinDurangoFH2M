#pragma once
#include "Microsoft.Xbox.Services.Privacy.PermissionCheckResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    struct PermissionCheckResult : PermissionCheckResultT<PermissionCheckResult>
    {
        PermissionCheckResult() = default;

        bool IsAllowed();
        hstring PermissionRequested();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Privacy::PermissionDenyReason> DenyReasons();
    };
}
