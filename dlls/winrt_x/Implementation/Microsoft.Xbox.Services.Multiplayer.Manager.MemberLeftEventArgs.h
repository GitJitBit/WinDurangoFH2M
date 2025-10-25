#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberLeftEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MemberLeftEventArgs : MemberLeftEventArgsT<MemberLeftEventArgs>
    {
        MemberLeftEventArgs() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> Members();
    };
}
