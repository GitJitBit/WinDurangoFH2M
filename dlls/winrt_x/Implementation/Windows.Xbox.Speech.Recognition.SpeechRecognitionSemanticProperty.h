#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionSemanticProperty.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognitionSemanticProperty : SpeechRecognitionSemanticPropertyT<SpeechRecognitionSemanticProperty>
    {
        SpeechRecognitionSemanticProperty() = default;

        hstring Name();
        hstring ValueAsString();
        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionConfidence ConfidenceLevel();
        float ConfidenceScore();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionSemanticProperty> Duplicates();
    };
}
