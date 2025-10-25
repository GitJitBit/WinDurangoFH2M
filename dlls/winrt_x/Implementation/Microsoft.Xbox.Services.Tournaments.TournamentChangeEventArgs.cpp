#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TournamentChangeEventArgs::OrganizerId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TournamentChangeEventArgs::TournamentId()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
