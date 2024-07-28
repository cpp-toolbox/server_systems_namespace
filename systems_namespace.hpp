#ifndef SYSTEMS_NAMESPACE_HPP
#define SYSTEMS_NAMESPACE_HPP

#include <string>
#include <vector>

namespace Systems {

const std::string networking = "networking";
const std::string physics = "physics";
const std::string asset_loading = "asset_loading";

const std::vector<std::string> all = {networking, physics, asset_loading};

} // namespace Systems

#endif // SYSTEMS_NAMESPACE_HPP