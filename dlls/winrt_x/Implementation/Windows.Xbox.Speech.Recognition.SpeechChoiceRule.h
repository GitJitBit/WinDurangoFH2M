#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechChoiceRule.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechChoiceRule : SpeechChoiceRuleT<SpeechChoiceRule>
    {
        SpeechChoiceRule() = default;

        bool EnabledOnLoad();
        void EnabledOnLoad(bool value);
        void Clear();
        void AddItem(winrt::Windows::Xbox::Speech::Recognition::ISpeechRuleItem const& item);
    };
}
