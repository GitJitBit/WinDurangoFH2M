#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechSequenceRule.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechSequenceRule : SpeechSequenceRuleT<SpeechSequenceRule>
    {
        SpeechSequenceRule() = default;

        bool EnabledOnLoad();
        void EnabledOnLoad(bool value);
        void Clear();
        void AppendItem(winrt::Windows::Xbox::Speech::Recognition::ISpeechRuleItem const& item);
    };
}
