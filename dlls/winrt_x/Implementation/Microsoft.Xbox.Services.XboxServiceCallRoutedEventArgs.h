#pragma once
#include "Microsoft.Xbox.Services.XboxServiceCallRoutedEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxServiceCallRoutedEventArgs : XboxServiceCallRoutedEventArgsT<XboxServiceCallRoutedEventArgs>
    {
        XboxServiceCallRoutedEventArgs() = default;

        hstring HttpMethod();
        winrt::Windows::Foundation::Uri Url();
        hstring RequestHeaders();
        winrt::Microsoft::Xbox::Services::HttpCallRequestMessage RequestBody();
        uint32_t ResponseCount();
        hstring ResponseHeaders();
        hstring ResponseBody();
        hstring ETag();
        hstring Token();
        hstring Signature();
        uint32_t HttpStatus();
        hstring FullResponseToString();
        winrt::Windows::Foundation::DateTime RequestTimeUTC();
        winrt::Windows::Foundation::DateTime ResponseTimeUTC();
        winrt::Windows::Foundation::TimeSpan ElapsedCallTime();
        hstring XboxUserId();
    };
}
