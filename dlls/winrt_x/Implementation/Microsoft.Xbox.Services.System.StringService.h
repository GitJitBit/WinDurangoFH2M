#pragma once
#include "Microsoft.Xbox.Services.System.StringService.g.h"


namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    struct StringService : StringServiceT<StringService>
    {
        StringService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::System::VerifyStringResult> VerifyStringAsync(hstring stringToVerify);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::System::VerifyStringResult>> VerifyStringsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> stringsToVerify);
    };
}
