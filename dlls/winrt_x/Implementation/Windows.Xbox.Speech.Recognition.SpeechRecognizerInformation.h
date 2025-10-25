#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerInformation.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechRecognizerInformation : SpeechRecognizerInformationT<SpeechRecognizerInformation>
    {
        SpeechRecognizerInformation() = default;

        hstring DisplayName();
        hstring Id();
        hstring Language();
        hstring Description();
    };
}
