#pragma once
#include "Microsoft.Xbox.Services.HttpCallRequestMessage.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct HttpCallRequestMessage : HttpCallRequestMessageT<HttpCallRequestMessage>
    {
        HttpCallRequestMessage() = default;

        hstring RequestMessageString();
        com_array<uint8_t> RequestMessageVector();
        winrt::Microsoft::Xbox::Services::HttpRequestMessageType GetHttpRequestMessageType();
    };
}
