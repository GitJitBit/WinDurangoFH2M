#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarBuilderRuleSet.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechGrammarBuilderRuleSet : SpeechGrammarBuilderRuleSetT<SpeechGrammarBuilderRuleSet>
    {
        SpeechGrammarBuilderRuleSet() = default;

        winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Xbox::Speech::Recognition::ISpeechRule>> First();
        winrt::Windows::Xbox::Speech::Recognition::ISpeechRule Lookup(hstring const& key);
        uint32_t Size();
        bool HasKey(hstring const& key);
        void Split(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::ISpeechRule>& first, winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::ISpeechRule>& second);
        winrt::Windows::Xbox::Speech::Recognition::SpeechChoiceRule AddChoiceRule(hstring const& key, winrt::Windows::Foundation::Collections::IIterable<hstring> const& phrases);
        winrt::Windows::Xbox::Speech::Recognition::SpeechChoiceRule AddChoiceRule(hstring const& key);
        winrt::Windows::Xbox::Speech::Recognition::SpeechSequenceRule AddSequenceRule(hstring const& key, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Speech::Recognition::ISpeechRuleItem> const& items);
        winrt::Windows::Xbox::Speech::Recognition::SpeechSequenceRule AddSequenceRule(hstring const& key);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGraphRule AddGraphRule(hstring const& key);
        void Clear();
        winrt::Windows::Xbox::Speech::Recognition::ISpeechRule Remove(hstring const& key);
    };
}
