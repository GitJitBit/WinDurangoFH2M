#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubStringSetting.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubStringSetting : ClubStringSettingT<ClubStringSetting>
    {
        ClubStringSetting() = default;

        hstring Value();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> AllowedValues();
        bool CanViewerChangeSetting();
    };
}
