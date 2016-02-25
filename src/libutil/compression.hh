#pragma once

#include <string>

namespace nix {

std::string compressXZ(const std::string & in);

std::string decompressXZ(const std::string & in);

}
