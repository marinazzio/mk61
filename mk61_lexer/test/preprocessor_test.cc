#include <gtest/gtest.h>

#include "preprocessor.h"

namespace lexer_common_suite {
	TEST(General, ReturnsInputForPerfectInput) {
		Preprocessor *subject = new Preprocessor();
		std::string input = "Hello, World!";
		EXPECT_EQ(input, subject->call(input));
	}

	TEST(General, ReturnsInputForEmptyInput) {
		Preprocessor *subject = new Preprocessor();
		std::string input = "";
		EXPECT_EQ(input, subject->call(input));
	}
}  // namespace lexer_common_suite