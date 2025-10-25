#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerAudioContext.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerAudioContext : SpeechRecognizerAudioContextT<SpeechRecognizerAudioContext>
    {
        SpeechRecognizerAudioContext() = default;

        uint64_t AudioPosition();
    };
}
