#pragma once
#include "Microsoft.Xbox.Services.Tournaments.MatchMetadata.g.h"


namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct MatchMetadata : MatchMetadataT<MatchMetadata>
    {
        MatchMetadata() = default;

        hstring Description();
        winrt::Windows::Foundation::DateTime StartTIme();
        bool IsBye();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> OpposingTeamIds();
    };
}
