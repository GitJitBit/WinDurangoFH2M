#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResult.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResult.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    hstring SpeechRecognitionResult::Text()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionConfidence SpeechRecognitionResult::TextConfidence()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionSemanticProperty> SpeechRecognitionResult::Semantics()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring SpeechRecognitionResult::RuleName()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> SpeechRecognitionResult::GetAlternates(uint32_t maxAlternates)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultDetail SpeechRecognitionResult::Details()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
