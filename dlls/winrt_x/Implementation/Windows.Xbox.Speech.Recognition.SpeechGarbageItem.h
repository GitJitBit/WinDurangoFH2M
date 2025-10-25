#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechGarbageItem.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechGarbageItem : SpeechGarbageItemT<SpeechGarbageItem>
    {
        SpeechGarbageItem() = default;

        SpeechGarbageItem(winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& matchType);
        winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType MatchType();
        void MatchType(winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& value);
        hstring Semantics();
        void Semantics(hstring const& value);
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechGarbageItem : SpeechGarbageItemT<SpeechGarbageItem, implementation::SpeechGarbageItem>
    {
    };
}
