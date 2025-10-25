#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.TitleHistory.g.h"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct TitleHistory : TitleHistoryT<TitleHistory>
    {
        TitleHistory() = default;

        bool HasUserPlayed();
        winrt::Windows::Foundation::DateTime LastTimeUserPlayed();
    };
}
