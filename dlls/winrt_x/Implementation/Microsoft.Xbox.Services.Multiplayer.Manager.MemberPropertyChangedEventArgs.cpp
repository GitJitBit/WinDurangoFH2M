#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberPropertyChangedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberPropertyChangedEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember MemberPropertyChangedEventArgs::Member()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MemberPropertyChangedEventArgs::Properties()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
