#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::Values()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::AllowedValues()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ClubStringMultiSetting::CanViewerChangeSetting()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
