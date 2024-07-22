#pragma once

#define DLL_EXPORT __declspec(dllexport)

#include <string>

class Preprocessor
{
	public:

	DLL_EXPORT Preprocessor();
	DLL_EXPORT ~Preprocessor();

	DLL_EXPORT std::string call(const std::string& raw_input);
};

