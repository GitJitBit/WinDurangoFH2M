#pragma once
#include "Windows.Xbox.UI.AddRemoveFriendResult.g.h"


namespace winrt::Windows::Xbox::UI::implementation
{
    struct AddRemoveFriendResult : AddRemoveFriendResultT<AddRemoveFriendResult>
    {
        AddRemoveFriendResult() = default;

        winrt::Windows::Xbox::UI::AddRemoveFriendResultStatus Status();
    };
}
