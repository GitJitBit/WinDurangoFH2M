#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUser.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct XboxSocialUser : XboxSocialUserT<XboxSocialUser>
    {
        XboxSocialUser() = default;

        hstring XboxUserId();
        bool IsFavorite();
        bool IsFollowingUser();
        bool IsFollowedByCaller();
        hstring DisplayName();
        hstring RealName();
        hstring DisplayPicUrlRaw();
        bool UseAvatar();
        hstring Gamertag();
        hstring Gamerscore();
        winrt::Microsoft::Xbox::Services::Social::Manager::SocialManagerPresenceRecord PresenceRecord();
        winrt::Microsoft::Xbox::Services::Social::Manager::TitleHistory TitleHistory();
        winrt::Microsoft::Xbox::Services::Social::Manager::PreferredColor PreferredColor();
    };
}
