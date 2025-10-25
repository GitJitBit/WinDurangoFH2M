#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType XboxLiveHttpCallResponse::BodyType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseBodyString()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseBodyJson()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    com_array<uint8_t> XboxLiveHttpCallResponse::ResponseBodyVector()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> XboxLiveHttpCallResponse::Headers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t XboxLiveHttpCallResponse::HttpStatus()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t XboxLiveHttpCallResponse::ErrorCode()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ErrorMessage()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ETag()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseDate()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int64_t XboxLiveHttpCallResponse::RetryAfterInSeconds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
