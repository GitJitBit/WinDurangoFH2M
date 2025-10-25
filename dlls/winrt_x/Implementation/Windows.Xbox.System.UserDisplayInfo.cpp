#include "pch.h"
#include "Windows.Xbox.System.UserDisplayInfo.h"
#include "Windows.Xbox.System.UserDisplayInfo.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring UserDisplayInfo::Gamertag()
    {
		LOG_INFO("UserDisplayInfo::Gamertag() called");
        hstring gamertag = L"durangler" + m_gamertag;
        return gamertag;
    }
    uint32_t UserDisplayInfo::GamerScore()
    {
		LOG_INFO("UserDisplayInfo::GamerScore() called");
        return 0;
    }
    hstring UserDisplayInfo::ApplicationDisplayName()
    {
        LOG_INFO("UserDisplayInfo::GameDisplayName() called");
        return winrt::to_hstring("WinDurango");
    }
    hstring UserDisplayInfo::GameDisplayName()
    {

		LOG_INFO("UserDisplayInfo::GameDisplayName() called");
        hstring gamertag = L"durangler" + m_gamertag;
        return gamertag;
    }
    int32_t UserDisplayInfo::Reputation()
    {
        LOG_INFO("UserDisplayInfo::Reputation() called");
        return 1;
    }
    winrt::Windows::Xbox::System::UserAgeGroup UserDisplayInfo::AgeGroup()
    {
		LOG_INFO("UserDisplayInfo::AgeGroup() called");
        return UserAgeGroup::Unknown;
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> UserDisplayInfo::Privileges()
    {   
		LOG_INFO("UserDisplayInfo::Privileges() called");
        auto vector = winrt::single_threaded_vector<uint32_t>();
        vector.Append(1);
        return vector.GetView();
    }
}
