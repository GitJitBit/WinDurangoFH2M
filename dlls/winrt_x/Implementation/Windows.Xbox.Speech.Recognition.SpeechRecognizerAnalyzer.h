#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerAnalyzer.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerAnalyzer
    {
        SpeechRecognizerAnalyzer() = default;

        static winrt::Windows::Foundation::IAsyncAction SerializeGrammarsToFolderAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer speechRecognizer, winrt::Windows::Foundation::Uri destinationFolder, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarRuleInclusionMode inclusionMode);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> CheckResultFromPhraseAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer speechRecognizer, hstring phrase);
        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationDetail> GetPronunciationFromPhrase(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer const& speechRecognizer, hstring const& phrase);
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechRecognizerAnalyzer : SpeechRecognizerAnalyzerT<SpeechRecognizerAnalyzer, implementation::SpeechRecognizerAnalyzer>
    {
    };
}
