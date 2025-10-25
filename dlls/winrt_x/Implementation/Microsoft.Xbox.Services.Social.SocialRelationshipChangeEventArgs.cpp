#include "pch.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring SocialRelationshipChangeEventArgs::CallerXboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::SocialNotificationType SocialRelationshipChangeEventArgs::SocialNotification()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> SocialRelationshipChangeEventArgs::XboxUserIds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
