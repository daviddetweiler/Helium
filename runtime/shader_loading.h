#ifndef HELIUM_SHADER_LOADING_H
#define HELIUM_SHADER_LOADING_H

#include <vector>

#include <gsl/gsl>

namespace helium {
	std::vector<char> load_compiled_shader(gsl::cwzstring<> name);
}

#endif
