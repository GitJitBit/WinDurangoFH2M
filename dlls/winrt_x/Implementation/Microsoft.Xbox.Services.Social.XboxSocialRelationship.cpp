#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring XboxSocialRelationship::XboxUserId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool XboxSocialRelationship::IsFavorite()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool XboxSocialRelationship::IsFollowingCaller()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> XboxSocialRelationship::SocialNetworks()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
