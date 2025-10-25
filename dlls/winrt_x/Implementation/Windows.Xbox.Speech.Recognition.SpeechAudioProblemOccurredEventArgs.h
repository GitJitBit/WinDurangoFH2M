#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechAudioProblemOccurredEventArgs.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechAudioProblemOccurredEventArgs : SpeechAudioProblemOccurredEventArgsT<SpeechAudioProblemOccurredEventArgs>
    {
        SpeechAudioProblemOccurredEventArgs() = default;

        winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionAudioProblem Problem();
    };
}
