#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberLeftEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberLeftEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerMember> MemberLeftEventArgs::Members()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
