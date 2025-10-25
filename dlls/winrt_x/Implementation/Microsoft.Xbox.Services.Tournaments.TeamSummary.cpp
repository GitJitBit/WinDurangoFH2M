#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamSummary.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamSummary.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamSummary::Id()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TeamState TeamSummary::TeamState()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t TeamSummary::Ranking()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
