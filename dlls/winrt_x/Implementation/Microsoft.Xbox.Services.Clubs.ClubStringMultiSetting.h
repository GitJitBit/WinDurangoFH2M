#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubStringMultiSetting : ClubStringMultiSettingT<ClubStringMultiSetting>
    {
        ClubStringMultiSetting() = default;

        winrt::Windows::Foundation::Collections::IVectorView<hstring> Values();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> AllowedValues();
        bool CanViewerChangeSetting();
    };
}
