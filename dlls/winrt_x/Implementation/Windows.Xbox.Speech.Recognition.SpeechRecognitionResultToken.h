#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultToken.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognitionResultToken : SpeechRecognitionResultTokenT<SpeechRecognitionResultToken>
    {
        SpeechRecognitionResultToken() = default;

        hstring DisplayForm();
        hstring LexicalForm();
        hstring PronunciationForm();
    };
}
