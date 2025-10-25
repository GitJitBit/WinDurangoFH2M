#pragma once
#include "Windows.Xbox.ApplicationModel.Core.UserContextLookup.g.h"


namespace winrt::Windows::Xbox::ApplicationModel::Core::implementation
{
    struct UserContextLookup : UserContextLookupT<UserContextLookup>
    {
        UserContextLookup() = default;

        void RefreshUserContext(hstring const& aumid);
        void GetCurrentUserContext(hstring const& aumid, winrt::Windows::Xbox::System::User& value);
        void NotifyUserContextChanged(uint32_t userId, uint32_t userSequenceId);
    };
}
