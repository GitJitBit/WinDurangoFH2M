#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerAnalyzer.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerAnalyzer.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Foundation::IAsyncAction SpeechRecognizerAnalyzer::SerializeGrammarsToFolderAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer speechRecognizer, winrt::Windows::Foundation::Uri destinationFolder, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarRuleInclusionMode inclusionMode)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> SpeechRecognizerAnalyzer::CheckResultFromPhraseAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer speechRecognizer, hstring phrase)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationDetail> SpeechRecognizerAnalyzer::GetPronunciationFromPhrase(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer const& speechRecognizer, hstring const& phrase)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
