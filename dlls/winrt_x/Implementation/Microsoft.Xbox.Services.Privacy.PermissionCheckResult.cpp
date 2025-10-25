#include "pch.h"
#include "Microsoft.Xbox.Services.Privacy.PermissionCheckResult.h"
#include "Microsoft.Xbox.Services.Privacy.PermissionCheckResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    bool PermissionCheckResult::IsAllowed()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring PermissionCheckResult::PermissionRequested()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Privacy::PermissionDenyReason> PermissionCheckResult::DenyReasons()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
