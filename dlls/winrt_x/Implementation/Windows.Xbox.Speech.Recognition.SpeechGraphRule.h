#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechGraphRule.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechGraphRule : SpeechGraphRuleT<SpeechGraphRule>
    {
        SpeechGraphRule() = default;

        bool EnabledOnLoad();
        void EnabledOnLoad(bool value);
        void Clear();
        winrt::Windows::Xbox::Speech::Recognition::SpeechGraphState CreateGraphState(winrt::Windows::Xbox::Speech::Recognition::SpeechGraphStateType const& stateType);
        void StartState(winrt::Windows::Xbox::Speech::Recognition::SpeechGraphState const& ruleState);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGraphState StartState();
    };
}
