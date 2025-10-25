#pragma once
#include "Microsoft.Xbox.Services.XboxLiveLogCallEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveLogCallEventArgs : XboxLiveLogCallEventArgsT<XboxLiveLogCallEventArgs>
    {
        XboxLiveLogCallEventArgs() = default;

        winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel Level();
        hstring Category();
        hstring Message();
    };
}
