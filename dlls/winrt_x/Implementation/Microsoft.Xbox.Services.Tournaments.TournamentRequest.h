#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequest.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentRequest : TournamentRequestT<TournamentRequest>
    {
        TournamentRequest() = default;

        TournamentRequest(bool filterResultsForUser);
        uint32_t MaxItems();
        void MaxItems(uint32_t value);
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TournamentState> StateFilter();
        void StateFilter(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Tournaments::TournamentState> const& states);
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentOrderBy OrderBy();
        void OrderBy(winrt::Microsoft::Xbox::Services::Tournaments::TournamentOrderBy const& value);
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentSortOrder SortOrder();
        void SortOrder(winrt::Microsoft::Xbox::Services::Tournaments::TournamentSortOrder const& value);
        hstring OrganizerId();
        void OrganizerId(hstring const& value);
    };
}
namespace winrt::Microsoft::Xbox::Services::Tournaments::factory_implementation
{
    struct TournamentRequest : TournamentRequestT<TournamentRequest, implementation::TournamentRequest>
    {
    };
}
