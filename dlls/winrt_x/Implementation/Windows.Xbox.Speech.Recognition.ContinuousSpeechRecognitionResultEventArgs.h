#pragma once
#include "Windows.Xbox.Speech.Recognition.ContinuousSpeechRecognitionResultEventArgs.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct ContinuousSpeechRecognitionResultEventArgs : ContinuousSpeechRecognitionResultEventArgsT<ContinuousSpeechRecognitionResultEventArgs>
    {
        ContinuousSpeechRecognitionResultEventArgs() = default;

        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult Result();
    };
}
