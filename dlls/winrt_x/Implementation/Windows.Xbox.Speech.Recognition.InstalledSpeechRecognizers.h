#pragma once
#include "Windows.Xbox.Speech.Recognition.InstalledSpeechRecognizers.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct InstalledSpeechRecognizers
    {
        InstalledSpeechRecognizers() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation> All();
        static winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation Default();
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct InstalledSpeechRecognizers : InstalledSpeechRecognizersT<InstalledSpeechRecognizers, implementation::InstalledSpeechRecognizers>
    {
    };
}
