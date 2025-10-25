#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveWnsEventArgs.h"
#include "Microsoft.Xbox.Services.XboxLiveWnsEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    hstring XboxLiveWnsEventArgs::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveWnsEventArgs::NotificationType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
