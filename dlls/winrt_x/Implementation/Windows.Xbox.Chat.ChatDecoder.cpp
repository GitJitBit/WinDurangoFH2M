#include "pch.h"
#include "Windows.Xbox.Chat.ChatDecoder.h"
#include "Windows.Xbox.Chat.ChatDecoder.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Xbox::Chat::IFormat ChatDecoder::Format()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatDecoder::Decode(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Storage::Streams::IBuffer& decodedBuffer)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t ChatDecoder::IsDataInFlight()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
