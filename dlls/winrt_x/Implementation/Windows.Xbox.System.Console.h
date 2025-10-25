#pragma once
#include "Windows.Xbox.System.Console.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct Console
    {
        Console() = default;

        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, hstring body);
        static hstring ApplicationSpecificDeviceId();
    };
}
namespace winrt::Windows::Xbox::System::factory_implementation
{
    struct Console : ConsoleT<Console, implementation::Console>
    {
    };
}
