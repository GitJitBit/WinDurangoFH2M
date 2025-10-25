#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentRegistrationStateChangedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentRegistrationStateChangedEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationState TournamentRegistrationStateChangedEventArgs::RegistrationState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationReason TournamentRegistrationStateChangedEventArgs::RegistrationReason()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
