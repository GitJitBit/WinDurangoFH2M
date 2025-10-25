#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerSoundEndedEventArgs.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerSoundEndedEventArgs : SpeechRecognizerSoundEndedEventArgsT<SpeechRecognizerSoundEndedEventArgs>
    {
        SpeechRecognizerSoundEndedEventArgs() = default;

        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerAudioContext AudioContext();
    };
}
