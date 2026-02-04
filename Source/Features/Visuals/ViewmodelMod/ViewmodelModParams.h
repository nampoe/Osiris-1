#pragma once

#include <cstdint>
#include <Config/RangeConstrainedVariableParams.h>

namespace viewmodel_mod_params
{

constexpr auto kFov = RangeConstrainedVariableParams<std::uint8_t>{.min = 0, .max = 254, .def = 80};
constexpr auto kPreviewFallbackFov = 54.0f;

}
