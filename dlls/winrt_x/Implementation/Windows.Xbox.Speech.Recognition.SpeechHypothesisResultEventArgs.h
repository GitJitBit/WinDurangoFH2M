#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechHypothesisResultEventArgs.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechHypothesisResultEventArgs : SpeechHypothesisResultEventArgsT<SpeechHypothesisResultEventArgs>
    {
        SpeechHypothesisResultEventArgs() = default;

        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult Hypothesis();
    };
}
