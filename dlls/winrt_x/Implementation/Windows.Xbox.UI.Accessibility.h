#pragma once
#include "Windows.Xbox.UI.Accessibility.g.h"


namespace winrt::Windows::Xbox::UI::implementation
{
    struct Accessibility
    {
        Accessibility() = default;

        static void SetSpeechToTextPositionHint(winrt::Windows::Xbox::UI::SpeechToTextPositionHint const& position);
        static void SendSpeechToTextString(hstring const& speakerName, hstring const& content, winrt::Windows::Xbox::UI::SpeechToTextType const& type);
    };
}
namespace winrt::Windows::Xbox::UI::factory_implementation
{
    struct Accessibility : AccessibilityT<Accessibility, implementation::Accessibility>
    {
    };
}
