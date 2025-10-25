#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialManager.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialManager : SocialManagerT<SocialManager>
    {
        SocialManager() = default;

        static winrt::Microsoft::Xbox::Services::Social::Manager::SocialManager SingletonInstance();
        void AddLocalUser(winrt::Windows::Xbox::System::User const& user, winrt::Microsoft::Xbox::Services::Social::Manager::SocialManagerExtraDetailLevel const& extraDetailLevel);
        void RemoveLocalUser(winrt::Windows::Xbox::System::User const& user);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::SocialEvent> DoWork();
        winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUserGroup CreateSocialUserGroupFromFilters(winrt::Windows::Xbox::System::User const& user, winrt::Microsoft::Xbox::Services::Social::Manager::PresenceFilter const& presenceFilter, winrt::Microsoft::Xbox::Services::Social::Manager::RelationshipFilter const& relationshipFilter);
        winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUserGroup CreateSocialUserGroupFromList(winrt::Windows::Xbox::System::User const& user, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIdList);
        void DestroySocialUserGroup(winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUserGroup const& xboxSocialUserGroup);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> LocalUsers();
        void UpdateSocialUserGroup(winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUserGroup const& socialGroup, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& users);
        void SetRichPresencePollingState(winrt::Windows::Xbox::System::User const& user, bool shouldEnablePolling);
    };
}
namespace winrt::Microsoft::Xbox::Services::Social::Manager::factory_implementation
{
    struct SocialManager : SocialManagerT<SocialManager, implementation::SocialManager>
    {
    };
}
