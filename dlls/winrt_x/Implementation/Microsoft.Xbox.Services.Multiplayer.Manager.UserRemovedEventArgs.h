#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.UserRemovedEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct UserRemovedEventArgs : UserRemovedEventArgsT<UserRemovedEventArgs>
    {
        UserRemovedEventArgs() = default;

        hstring XboxUserId();
    };
}
