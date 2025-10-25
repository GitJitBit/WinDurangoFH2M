#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGraphState.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGraphState.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    void SpeechGraphState::AddTransition(winrt::Windows::Xbox::Speech::Recognition::ISpeechRuleItem const& item, float weight, winrt::Windows::Xbox::Speech::Recognition::SpeechGraphState const& targetState)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGraphStateType SpeechGraphState::StateType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
