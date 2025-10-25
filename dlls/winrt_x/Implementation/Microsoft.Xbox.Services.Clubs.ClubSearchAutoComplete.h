#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubSearchAutoComplete.g.h"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubSearchAutoComplete : ClubSearchAutoCompleteT<ClubSearchAutoComplete>
    {
        ClubSearchAutoComplete() = default;

        hstring Id();
        hstring Name();
        hstring Description();
        hstring DisplayImageUrl();
        double Score();
        hstring SuggestedQueryText();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> Tags();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> AssociatedTitles();
    };
}
