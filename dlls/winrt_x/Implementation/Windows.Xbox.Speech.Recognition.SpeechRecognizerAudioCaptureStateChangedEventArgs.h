#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerAudioCaptureStateChangedEventArgs.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerAudioCaptureStateChangedEventArgs : SpeechRecognizerAudioCaptureStateChangedEventArgsT<SpeechRecognizerAudioCaptureStateChangedEventArgs>
    {
        SpeechRecognizerAudioCaptureStateChangedEventArgs() = default;

        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerAudioCaptureState State();
    };
}
