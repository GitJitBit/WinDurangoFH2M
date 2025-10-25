#pragma once
#include "Microsoft.Xbox.Services.Clubs.Club.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct Club : ClubT<Club>
    {
        Club() = default;

        hstring Id();
        winrt::Microsoft::Xbox::Services::Clubs::ClubType Type();
        winrt::Windows::Foundation::DateTime Created();
        hstring Owner();
        hstring TitleFamilyId();
        hstring TitleFamilyName();
        hstring ShortName();
        winrt::Microsoft::Xbox::Services::Clubs::ClubProfile Profile();
        hstring GlyphImageUrl();
        hstring BannerImageUrl();
        bool IsClubSuspended();
        winrt::Windows::Foundation::DateTime SuspendedUntil();
        hstring FounderXuid();
        uint32_t FollowersCount();
        uint32_t PresenceCount();
        uint32_t PresenceTodayCount();
        uint32_t MembersCount();
        uint32_t ModeratorsCount();
        uint32_t RecommendedCount();
        uint32_t RequestedToJoinCount();
        uint32_t ReportCount();
        uint32_t ReporteItemsCount();
        winrt::Microsoft::Xbox::Services::Clubs::ClubActionSettings ActionSettings();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole> ViewerRoles();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubRoster> GetRosterAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresenceRecord>> GetClubUserPresenceRecordsAsync();
        winrt::Windows::Foundation::IAsyncAction RenameClubAsync(hstring newName);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> GetRolesAsync(hstring xuid);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord>> GetRoleRecordsAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord>> GetRoleRecordsAsync(hstring xuid);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubPresenceCounts> GetPresenceCountsAsync();
        winrt::Windows::Foundation::IAsyncAction SetPresenceWithinClubAsync(winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresence presence);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> AddUserToClubAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> AddUserToClubAsync(hstring xuid);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> RemoveUserFromClubAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> RemoveUserFromClubAsync(hstring xuid);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> FollowClubAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> UnfollowClubAsync();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> BanUserFromClubAsync(hstring xuid);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> UnbanUserFromClubAsync(hstring xuid);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> AddClubModeratorAsync(hstring xuid);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> RemoveClubModeratorAsync(hstring xuid);
    };
}
