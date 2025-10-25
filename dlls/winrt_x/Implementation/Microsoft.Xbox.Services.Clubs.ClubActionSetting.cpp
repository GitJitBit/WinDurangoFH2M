#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubActionSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubActionSetting.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Microsoft::Xbox::Services::Clubs::ClubRole ClubActionSetting::RequiredRole()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole> ClubActionSetting::AllowedValues()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ClubActionSetting::CanViewerChangeSetting()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ClubActionSetting::CanViewerAct()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
