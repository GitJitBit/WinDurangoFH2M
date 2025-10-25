#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubRoleRecord.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubRoleRecord : ClubRoleRecordT<ClubRoleRecord>
    {
        ClubRoleRecord() = default;

        hstring Xuid();
        winrt::Microsoft::Xbox::Services::Clubs::ClubRole Role();
        hstring ActorXuid();
        winrt::Windows::Foundation::DateTime CreatedDate();
    };
}
