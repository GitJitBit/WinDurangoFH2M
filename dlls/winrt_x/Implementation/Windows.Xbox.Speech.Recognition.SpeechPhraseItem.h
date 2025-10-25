#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechPhraseItem.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechPhraseItem : SpeechPhraseItemT<SpeechPhraseItem>
    {
        SpeechPhraseItem() = default;

        SpeechPhraseItem(hstring const& text);
        SpeechPhraseItem(hstring const& text, hstring const& semantics);
        SpeechPhraseItem(hstring const& text, hstring const& semantics, winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& matchType);
        SpeechPhraseItem(hstring const& text, hstring const& semantics, winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& itemMatchType, winrt::Windows::Xbox::Speech::Recognition::SpeechPhraseSubsetMatchMode const& phraseSubsetMatchMode);
        winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType MatchType();
        void MatchType(winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& value);
        hstring Semantics();
        void Semantics(hstring const& value);
        hstring Text();
        void Text(hstring const& value);
        hstring Pronunciation();
        void Pronunciation(hstring const& value);
        hstring DisplayForm();
        void DisplayForm(hstring const& value);
        winrt::Windows::Xbox::Speech::Recognition::SpeechPhraseSubsetMatchMode SubsetMatchMode();
        void SubsetMatchMode(winrt::Windows::Xbox::Speech::Recognition::SpeechPhraseSubsetMatchMode const& value);
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechPhraseItem : SpeechPhraseItemT<SpeechPhraseItem, implementation::SpeechPhraseItem>
    {
    };
}
