#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerPhraseStartedEventArgs.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerPhraseStartedEventArgs : SpeechRecognizerPhraseStartedEventArgsT<SpeechRecognizerPhraseStartedEventArgs>
    {
        SpeechRecognizerPhraseStartedEventArgs() = default;

        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerAudioContext AudioContext();
    };
}
