#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberPropertyChangedEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MemberPropertyChangedEventArgs : MemberPropertyChangedEventArgsT<MemberPropertyChangedEventArgs>
    {
        MemberPropertyChangedEventArgs() = default;

        winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember Member();
        hstring Properties();
    };
}
