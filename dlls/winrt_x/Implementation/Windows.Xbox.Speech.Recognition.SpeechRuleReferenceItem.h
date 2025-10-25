#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRuleReferenceItem.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRuleReferenceItem : SpeechRuleReferenceItemT<SpeechRuleReferenceItem>
    {
        SpeechRuleReferenceItem() = default;

        SpeechRuleReferenceItem(hstring const& ruleName);
        SpeechRuleReferenceItem(hstring const& ruleName, winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& matchType);
        winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType MatchType();
        void MatchType(winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& value);
        hstring Semantics();
        void Semantics(hstring const& value);
        hstring RuleName();
        void RuleName(hstring const& value);
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechRuleReferenceItem : SpeechRuleReferenceItemT<SpeechRuleReferenceItem, implementation::SpeechRuleReferenceItem>
    {
    };
}
