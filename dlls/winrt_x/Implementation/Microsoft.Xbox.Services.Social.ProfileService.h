#pragma once
#include "Microsoft.Xbox.Services.Social.ProfileService.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct ProfileService : ProfileServiceT<ProfileService>
    {
        ProfileService() = default;

        winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxUserProfile> GetUserProfileAsync(hstring xboxUserId);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::XboxUserProfile>> GetUserProfilesAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::XboxUserProfile>> GetUserProfilesForSocialGroupAsync(hstring socialGroup);
    };
}
