#pragma once
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.g.h"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveHttpCall : XboxLiveHttpCallT<XboxLiveHttpCall>
    {
        XboxLiveHttpCall() = default;

        static winrt::Microsoft::Xbox::Services::XboxLiveHttpCall CreateXboxLiveHttpCall(winrt::Microsoft::Xbox::Services::XboxLiveContextSettings const& settings, hstring const& httpMethod, hstring const& serverName, hstring const& pathQueryFragment);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::XboxLiveHttpCallResponse> GetResponseWithAuth(winrt::Windows::Xbox::System::User user, winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType httpCallResponseBodyType);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::XboxLiveHttpCallResponse> GetResponseWithoutAuth(winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType httpCallResponseBodyType);
        void SetRequestBody(hstring const& value);
        void SetRequestBodyArray(array_view<uint8_t const> requestBodyArray);
        void SetCustomHeader(hstring const& headerName, hstring const& headerValue);
        bool RetryAllowed();
        void RetryAllowed(bool value);
        hstring ContentTypeHeaderValue();
        void ContentTypeHeaderValue(hstring const& value);
        hstring ContractVersionHeaderValue();
        void ContractVersionHeaderValue(hstring const& value);
        hstring ServerName();
        hstring PathQueryFragment();
        hstring HttpMethod();
    };
}
namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveHttpCall : XboxLiveHttpCallT<XboxLiveHttpCall, implementation::XboxLiveHttpCall>
    {
    };
}
