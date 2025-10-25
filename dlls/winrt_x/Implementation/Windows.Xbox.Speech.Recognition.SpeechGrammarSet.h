#pragma once
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarSet.g.h"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    struct SpeechGrammarSet : SpeechGrammarSetT<SpeechGrammarSet>
    {
        SpeechGrammarSet() = default;

        winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar>> First();
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar Lookup(hstring const& key);
        uint32_t Size();
        bool HasKey(hstring const& key);
        void Split(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar>& first, winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar>& second);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar AddGrammarFromList(hstring const& key, winrt::Windows::Foundation::Collections::IIterable<hstring> const& phrases);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar AddGrammarFromUri(hstring const& key, winrt::Windows::Foundation::Uri const& grammarUri);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar AddGrammarFromStream(hstring const& key, winrt::Windows::Storage::Streams::IRandomAccessStream const& stream);
        void Clear();
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar Remove(hstring const& key);
        winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar AddGrammarFromBuilder(hstring const& key, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilder const& grammar);
    };
}
