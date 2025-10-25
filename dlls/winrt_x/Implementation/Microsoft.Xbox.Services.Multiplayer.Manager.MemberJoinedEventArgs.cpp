#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberJoinedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberJoinedEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> MemberJoinedEventArgs::Members()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
