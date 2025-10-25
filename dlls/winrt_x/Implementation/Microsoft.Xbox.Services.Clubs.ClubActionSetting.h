#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubActionSetting.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubActionSetting : ClubActionSettingT<ClubActionSetting>
    {
        ClubActionSetting() = default;

        winrt::Microsoft::Xbox::Services::Clubs::ClubRole RequiredRole();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole> AllowedValues();
        bool CanViewerChangeSetting();
        bool CanViewerAct();
    };
}
