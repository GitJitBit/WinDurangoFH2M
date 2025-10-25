#pragma once
#include "Microsoft.Xbox.Services.Privacy.MultiplePermissionsCheckResult.g.h"


namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    struct MultiplePermissionsCheckResult : MultiplePermissionsCheckResultT<MultiplePermissionsCheckResult>
    {
        MultiplePermissionsCheckResult() = default;

        hstring XboxUserId();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Privacy::PermissionCheckResult> Items();
    };
}
