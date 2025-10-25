#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechGrammar.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechGrammar : SpeechGrammarT<SpeechGrammar>
    {
        SpeechGrammar() = default;

        bool Enabled();
        void Enabled(bool value);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarProbability Probability();
        void Probability(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarProbability const& value);
        void EnableRule(hstring const& ruleName);
        void DisableRule(hstring const& ruleName);
    };
}
