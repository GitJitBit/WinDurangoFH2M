#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultBodyCorrelation.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognitionResultBodyCorrelation : SpeechRecognitionResultBodyCorrelationT<SpeechRecognitionResultBodyCorrelation>
    {
        SpeechRecognitionResultBodyCorrelation() = default;

        uint64_t BodyTrackingId();
    };
}
