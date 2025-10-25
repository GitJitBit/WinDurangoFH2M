#pragma once
#include "Windows.Xbox.Input.NavigationReading.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct NavigationReading : NavigationReadingT<NavigationReading>
    {
        NavigationReading() = default;

        winrt::Windows::Foundation::DateTime Timestamp();
        winrt::Windows::Xbox::Input::NavigationButtons Buttons();
        bool IsUpPressed();
        bool IsDownPressed();
        bool IsLeftPressed();
        bool IsRightPressed();
        bool IsMenuPressed();
        bool IsViewPressed();
        bool IsPreviousPagePressed();
        bool IsNextPagePressed();
        bool IsAcceptPressed();
        bool IsCancelPressed();
        bool IsXPressed();
        bool IsYPressed();
    };
}
