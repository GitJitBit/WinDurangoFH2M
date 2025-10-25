#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyRosterChangedEventArgs.h"
#include "Windows.Xbox.Multiplayer.PartyRosterChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::AddedMembers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::AddedReservedMembers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::RemovedMembers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::RemovedReservedMembers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::PartyView PartyRosterChangedEventArgs::PartyView()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
