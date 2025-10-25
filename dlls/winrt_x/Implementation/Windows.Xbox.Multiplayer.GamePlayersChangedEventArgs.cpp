#include "pch.h"
#include "Windows.Xbox.Multiplayer.GamePlayersChangedEventArgs.h"
#include "Windows.Xbox.Multiplayer.GamePlayersChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference GamePlayersChangedEventArgs::GameSession()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayer> GamePlayersChangedEventArgs::AvailablePlayers()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayerDeviceGroup> GamePlayersChangedEventArgs::AvailablePlayersGroupedByDevice()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
