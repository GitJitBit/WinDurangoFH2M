#pragma once
#include "Windows.Xbox.UI.AccountPickerResult.g.h"


namespace winrt::Windows::Xbox::UI::implementation
{
    struct AccountPickerResult : AccountPickerResultT<AccountPickerResult>
    {
        AccountPickerResult() = default;

		uint64_t signedInUsersCount = 1;
        winrt::Windows::Xbox::System::IUser User();
    };
}
