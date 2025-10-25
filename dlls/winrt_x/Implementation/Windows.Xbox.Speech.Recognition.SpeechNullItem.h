#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechNullItem.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechNullItem : SpeechNullItemT<SpeechNullItem>
    {
        SpeechNullItem() = default;

        winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType MatchType();
        void MatchType(winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& value);
        hstring Semantics();
        void Semantics(hstring const& value);
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechNullItem : SpeechNullItemT<SpeechNullItem, implementation::SpeechNullItem>
    {
    };
}
