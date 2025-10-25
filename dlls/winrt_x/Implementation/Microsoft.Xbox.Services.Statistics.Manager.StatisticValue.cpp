#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticValue.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticValue.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    hstring StatisticValue::Name()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    double StatisticValue::AsNumber()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    int64_t StatisticValue::AsInteger()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring StatisticValue::AsString()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticDataType StatisticValue::DataType()
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
