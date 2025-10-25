#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.PreviousMatchMetadata.h"
#include "Microsoft.Xbox.Services.Tournaments.PreviousMatchMetadata.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult PreviousMatchMetadata::Result()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime PreviousMatchMetadata::EndTime()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::MatchMetadata PreviousMatchMetadata::MatchDetails()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
