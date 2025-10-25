#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResult.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognitionResult : SpeechRecognitionResultT<SpeechRecognitionResult>
    {
        SpeechRecognitionResult() = default;

        hstring Text();
        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionConfidence TextConfidence();
        winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionSemanticProperty> Semantics();
        hstring RuleName();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> GetAlternates(uint32_t maxAlternates);
        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultDetail Details();
    };
}
