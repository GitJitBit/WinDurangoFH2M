#pragma once
#include "Windows.Xbox.Speech.Recognition.InstalledSpeechRecognizersInProc.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct InstalledSpeechRecognizersInProc
    {
        InstalledSpeechRecognizersInProc() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation> All();
        static winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation Default();
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct InstalledSpeechRecognizersInProc : InstalledSpeechRecognizersInProcT<InstalledSpeechRecognizersInProc, implementation::InstalledSpeechRecognizersInProc>
    {
    };
}
