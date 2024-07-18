#include <gtest/gtest.h>

TEST(General, Workability) {
	EXPECT_STRNE("Hello", "World");
	EXPECT_EQ(25 * 12, 300);
}
