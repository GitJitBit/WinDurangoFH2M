#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleInfo.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleInfo.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerRoleInfo::MemberXboxUserIds()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerRoleInfo::MembersCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerRoleInfo::TargetCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerRoleInfo::TargetCount(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerRoleInfo::MaxMembersCount()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerRoleInfo::MaxMembersCount(uint32_t value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
