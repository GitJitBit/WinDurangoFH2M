#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubActionSettings.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubActionSettings : ClubActionSettingsT<ClubActionSettings>
    {
        ClubActionSettings() = default;

        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting PostToFeed();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting ViewFeed();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting WriteInChat();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting ViewChat();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting SetChatTopic();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting JoinLookingForGame();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting CreateLookingForGame();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting ViewLookingForGame();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting InviteOrAcceptJoinRequests();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting KickOrBan();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting ViewRoster();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting UpdateProfile();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting DeleteProfile();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSetting ViewProfile();
    };
}
