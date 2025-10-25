#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialEvent.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialEvent : SocialEventT<SocialEvent>
    {
        SocialEvent() = default;

        winrt::Windows::Xbox::System::User User();
        winrt::Microsoft::Xbox::Services::Social::Manager::SocialEventType EventType();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> UsersAffected();
        int32_t ErrorCode();
        hstring ErrorMessage();
        winrt::Microsoft::Xbox::Services::Social::Manager::SocialEventArgs EventArgs();
    };
}
