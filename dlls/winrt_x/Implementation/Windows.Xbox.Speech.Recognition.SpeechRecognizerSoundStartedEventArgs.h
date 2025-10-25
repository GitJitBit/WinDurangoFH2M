#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerSoundStartedEventArgs.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerSoundStartedEventArgs : SpeechRecognizerSoundStartedEventArgsT<SpeechRecognizerSoundStartedEventArgs>
    {
        SpeechRecognizerSoundStartedEventArgs() = default;

        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerAudioContext AudioContext();
    };
}
