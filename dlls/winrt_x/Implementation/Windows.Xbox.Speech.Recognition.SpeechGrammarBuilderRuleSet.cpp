#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarBuilderRuleSet.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarBuilderRuleSet.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Xbox::Speech::Recognition::ISpeechRule>> SpeechGrammarBuilderRuleSet::First()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::ISpeechRule SpeechGrammarBuilderRuleSet::Lookup(hstring const& key)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t SpeechGrammarBuilderRuleSet::Size()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    bool SpeechGrammarBuilderRuleSet::HasKey(hstring const& key)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammarBuilderRuleSet::Split(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::ISpeechRule>& first, winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::ISpeechRule>& second)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechChoiceRule SpeechGrammarBuilderRuleSet::AddChoiceRule(hstring const& key, winrt::Windows::Foundation::Collections::IIterable<hstring> const& phrases)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechChoiceRule SpeechGrammarBuilderRuleSet::AddChoiceRule(hstring const& key)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechSequenceRule SpeechGrammarBuilderRuleSet::AddSequenceRule(hstring const& key, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Speech::Recognition::ISpeechRuleItem> const& items)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechSequenceRule SpeechGrammarBuilderRuleSet::AddSequenceRule(hstring const& key)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGraphRule SpeechGrammarBuilderRuleSet::AddGraphRule(hstring const& key)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammarBuilderRuleSet::Clear()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::ISpeechRule SpeechGrammarBuilderRuleSet::Remove(hstring const& key)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
