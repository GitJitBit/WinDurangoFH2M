#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.InstalledSpeechRecognizersInProc.h"
#include "Windows.Xbox.Speech.Recognition.InstalledSpeechRecognizersInProc.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation> InstalledSpeechRecognizersInProc::All()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation InstalledSpeechRecognizersInProc::Default()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
