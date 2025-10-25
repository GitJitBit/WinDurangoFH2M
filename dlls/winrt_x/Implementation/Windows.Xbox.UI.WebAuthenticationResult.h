#pragma once
#include "Windows.Xbox.UI.WebAuthenticationResult.g.h"


namespace winrt::Windows::Xbox::UI::implementation
{
    struct WebAuthenticationResult : WebAuthenticationResultT<WebAuthenticationResult>
    {
        WebAuthenticationResult() = default;

        hstring ResponseData();
        winrt::Windows::Xbox::UI::WebAuthenticationStatus ResponseStatus();
        uint32_t ResponseErrorDetail();
    };
}
