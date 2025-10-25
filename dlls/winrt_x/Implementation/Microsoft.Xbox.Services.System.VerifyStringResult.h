#pragma once
#include "Microsoft.Xbox.Services.System.VerifyStringResult.g.h"


namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    struct VerifyStringResult : VerifyStringResultT<VerifyStringResult>
    {
        VerifyStringResult() = default;

        winrt::Microsoft::Xbox::Services::System::VerifyStringResultCode ResultCode();
        hstring FirstOffendingSubstring();
    };
}
