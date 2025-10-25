#include "pch.h"
#include "Microsoft.Xbox.Services.Privacy.MultiplePermissionsCheckResult.h"
#include "Microsoft.Xbox.Services.Privacy.MultiplePermissionsCheckResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    hstring MultiplePermissionsCheckResult::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Privacy::PermissionCheckResult> MultiplePermissionsCheckResult::Items()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
