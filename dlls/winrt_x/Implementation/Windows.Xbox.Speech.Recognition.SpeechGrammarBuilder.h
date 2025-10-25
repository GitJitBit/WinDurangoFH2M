#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarBuilder.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechGrammarBuilder : SpeechGrammarBuilderT<SpeechGrammarBuilder>
    {
        SpeechGrammarBuilder() = default;

        SpeechGrammarBuilder(hstring const& language);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilder> CreateFromSpeechGrammarAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar speechGrammar);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilder> CreateFromStreamAsync(winrt::Windows::Storage::Streams::IRandomAccessStream stream);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderRuleSet Rules();
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderSemanticsFormat SemanticsFormat();
        void SemanticsFormat(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderSemanticsFormat const& value);
        winrt::Windows::Xbox::Speech::Recognition::ISpeechRule RootRule();
        void SetRootRule(hstring const& ruleKey);
        void PronunciationFormat(winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationFormat const& value);
        winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationFormat PronunciationFormat();
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechGrammarBuilder : SpeechGrammarBuilderT<SpeechGrammarBuilder, implementation::SpeechGrammarBuilder>
    {
    };
}
