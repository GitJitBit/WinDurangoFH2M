#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubProfile.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubProfile : ClubProfileT<ClubProfile>
    {
        ClubProfile() = default;

        winrt::Microsoft::Xbox::Services::Clubs::ClubStringSetting Name();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringSetting Description();
        winrt::Microsoft::Xbox::Services::Clubs::ClubBooleanSetting MatureContentEnabled();
        winrt::Microsoft::Xbox::Services::Clubs::ClubBooleanSetting WatchClubTitlesOnly();
        winrt::Microsoft::Xbox::Services::Clubs::ClubBooleanSetting IsSearchable();
        winrt::Microsoft::Xbox::Services::Clubs::ClubBooleanSetting IsRecommendable();
        winrt::Microsoft::Xbox::Services::Clubs::ClubBooleanSetting RequestToJoinEnabled();
        winrt::Microsoft::Xbox::Services::Clubs::ClubBooleanSetting LeaveEnabled();
        winrt::Microsoft::Xbox::Services::Clubs::ClubBooleanSetting TransferOwnershipEnabled();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringSetting DisplayImageUrl();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringSetting BackgroundImageUrl();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringMultiSetting Tags();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringSetting PreferredLocale();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringMultiSetting AssociatedTitles();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringSetting PrimaryColor();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringSetting SecondayColor();
        winrt::Microsoft::Xbox::Services::Clubs::ClubStringSetting TertiaryColor();
    };
}
