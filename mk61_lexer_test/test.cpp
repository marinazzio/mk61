#include "pch.h"
#include "../mk61_lexer/Preprocessor.h"

namespace PreprocessorSuite {
	TEST(PreprocessorCall, ReturnsInputString) {
		Preprocessor preprocessor;
		std::string input = "Hello, World!";
		EXPECT_EQ(input, preprocessor.call(input));
	}
}
