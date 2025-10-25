#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechGraphState.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechGraphState : SpeechGraphStateT<SpeechGraphState>
    {
        SpeechGraphState() = default;

        void AddTransition(winrt::Windows::Xbox::Speech::Recognition::ISpeechRuleItem const& item, float weight, winrt::Windows::Xbox::Speech::Recognition::SpeechGraphState const& targetState);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGraphStateType StateType();
    };
}
namespace winrt::Windows::Xbox::Speech::Recognition::factory_implementation
{
    struct SpeechGraphState : SpeechGraphStateT<SpeechGraphState, implementation::SpeechGraphState>
    {
    };
}
