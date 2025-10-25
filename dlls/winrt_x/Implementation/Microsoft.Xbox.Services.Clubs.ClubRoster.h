#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubRoster : ClubRosterT<ClubRoster>
    {
        ClubRoster() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> Moderators();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> RequestedToJoin();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> Recommended();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> Banned();
    };
}
