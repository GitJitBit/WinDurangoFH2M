#pragma once
#include "Microsoft.Xbox.Services.Social.XboxUserProfile.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct XboxUserProfile : XboxUserProfileT<XboxUserProfile>
    {
        XboxUserProfile() = default;

        hstring ApplicationDisplayName();
        winrt::Windows::Foundation::Uri ApplicationDisplayPictureResizeUri();
        hstring GameDisplayName();
        winrt::Windows::Foundation::Uri GameDisplayPictureResizeUri();
        hstring Gamerscore();
        hstring Gamertag();
        hstring XboxUserId();
    };
}
