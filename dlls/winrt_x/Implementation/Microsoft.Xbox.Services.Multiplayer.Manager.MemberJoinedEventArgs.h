#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberJoinedEventArgs.g.h"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MemberJoinedEventArgs : MemberJoinedEventArgsT<MemberJoinedEventArgs>
    {
        MemberJoinedEventArgs() = default;

        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> Members();
    };
}
