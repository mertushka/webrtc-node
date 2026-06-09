#pragma once

#include <cstdint>
#include <string>

namespace webrtc_node {

struct CertificateMaterial {
	std::string certificatePem;
	std::string keyPem;
	std::string fingerprint;
};

CertificateMaterial GenerateCertificateMaterial(const std::string &algorithm,
                                                uint32_t modulusLength, double expiresMs);

} // namespace webrtc_node
