#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManager.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManager.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Social::Manager::SocialManager SocialManager::SingletonInstance()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SocialManager::AddLocalUser(winrt::Windows::Xbox::System::User const& user, winrt::Microsoft::Xbox::Services::Social::Manager::SocialManagerExtraDetailLevel const& extraDetailLevel)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SocialManager::RemoveLocalUser(winrt::Windows::Xbox::System::User const& user)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::SocialEvent> SocialManager::DoWork()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUserGroup SocialManager::CreateSocialUserGroupFromFilters(winrt::Windows::Xbox::System::User const& user, winrt::Microsoft::Xbox::Services::Social::Manager::PresenceFilter const& presenceFilter, winrt::Microsoft::Xbox::Services::Social::Manager::RelationshipFilter const& relationshipFilter)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUserGroup SocialManager::CreateSocialUserGroupFromList(winrt::Windows::Xbox::System::User const& user, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIdList)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SocialManager::DestroySocialUserGroup(winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUserGroup const& xboxSocialUserGroup)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> SocialManager::LocalUsers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SocialManager::UpdateSocialUserGroup(winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUserGroup const& socialGroup, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& users)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SocialManager::SetRichPresencePollingState(winrt::Windows::Xbox::System::User const& user, bool shouldEnablePolling)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
