#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyView.h"
#include "Windows.Xbox.Multiplayer.PartyView.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyView::ReservedMembers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::PartyMember> PartyView::Members()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::PartyMemberDeviceGroup> PartyView::MembersGroupedByDevice()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference PartyView::MatchSession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference PartyView::GameSession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool PartyView::IsPartyInAnotherTitle()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::SessionJoinability PartyView::Joinability()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
