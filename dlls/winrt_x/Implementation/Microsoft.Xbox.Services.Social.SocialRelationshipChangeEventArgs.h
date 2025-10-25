#pragma once
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct SocialRelationshipChangeEventArgs : SocialRelationshipChangeEventArgsT<SocialRelationshipChangeEventArgs>
    {
        SocialRelationshipChangeEventArgs() = default;

        hstring CallerXboxUserId();
        winrt::Microsoft::Xbox::Services::Social::SocialNotificationType SocialNotification();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> XboxUserIds();
    };
}
