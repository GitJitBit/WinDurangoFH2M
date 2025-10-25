#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubBooleanSetting.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubBooleanSetting : ClubBooleanSettingT<ClubBooleanSetting>
    {
        ClubBooleanSetting() = default;

        bool Value();
        bool CanViewerChangeSetting();
    };
}
