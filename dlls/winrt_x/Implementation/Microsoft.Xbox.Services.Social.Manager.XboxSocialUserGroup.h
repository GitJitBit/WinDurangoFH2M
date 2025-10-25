#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUserGroup.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct XboxSocialUserGroup : XboxSocialUserGroupT<XboxSocialUserGroup>
    {
        XboxSocialUserGroup() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUser> Users();
        winrt::Microsoft::Xbox::Services::Social::Manager::SocialUserGroupType SocialUserGroupType();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> UsersTrackedBySocialUserGroup();
        winrt::Windows::Xbox::System::User LocalUser();
        winrt::Microsoft::Xbox::Services::Social::Manager::PresenceFilter PresenceFilterOfGroup();
        winrt::Microsoft::Xbox::Services::Social::Manager::RelationshipFilter RelationshipFilterOfGroup();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUser> GetUsersFromXboxUserIds(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds);
    };
}
