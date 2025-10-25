#include "pch.h"
#include "Windows.Xbox.Networking.Development.h"
#include "Windows.Xbox.Networking.Development.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    winrt::Windows::Xbox::Networking::SecureDeviceAddress Development::CreateSecureDeviceAddressFromHostNames(winrt::Windows::Xbox::Networking::SecureDeviceId const& secureDeviceId, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Networking::HostName> const& hostNames)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription Development::CreateSecureDeviceSocketDescription(hstring const& name, winrt::Windows::Xbox::Networking::SecureIpProtocol const& secureIpProtocol, uint16_t boundPortRangeLower, uint16_t boundPortRangeUpper, winrt::Windows::Xbox::Networking::SecureDeviceSocketUsage const& allowedUsages)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceAssociationTemplate Development::CreateSecureDeviceAssociationTemplate(hstring const& name, winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription const& initiatorSecureDeviceSocketDescription, winrt::Windows::Xbox::Networking::SecureDeviceSocketDescription const& acceptorSecureDeviceSocketDescription, winrt::Windows::Xbox::Networking::SecureDeviceAssociationUsage const& allowedUsages, hstring const& relyingParty, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Networking::ProtocolParserDescription> const& protocolParserDescriptions, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Xbox::Networking::QualityOfServiceMetric> const& qualityOfServiceMetricPathPriorities, winrt::Windows::Xbox::Networking::MultiplayerSessionRequirement const& multiplayerSessionRequirement)
    {
        LOG_NOT_IMPLEMENTED(); throw hresult_not_implemented();
    }
}
