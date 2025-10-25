#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammar.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammar.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    bool SpeechGrammar::Enabled()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammar::Enabled(bool value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarProbability SpeechGrammar::Probability()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammar::Probability(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarProbability const& value)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammar::EnableRule(hstring const& ruleName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammar::DisableRule(hstring const& ruleName)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
