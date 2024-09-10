#include <gtest/gtest.h>

#include "Keyboard.h"

class KeyboardTest : public ::testing::Test {
protected:
	Keyboard* subject;

	void SetUp() override {
		subject = new Keyboard();
	}

	void TearDown() override {
		delete subject;
	}
};

// 11, 12, 13
// 16, 17, 18
// 21, 22, 23
// 26
namespace keyboard_digits {
	TEST_F(Keyboard, ReturnsProperCodeForSingleNumber) {
		EXPECT_EQ(subject->GetCodeByKeyPosition(11), 0x07);
		EXPEXT_EQ(subject->GetCodeByKeyPosition(12), 0x08);
		EXPEXT_EQ(subject->GetCodeByKeyPosition(13), 0x09);
		EXPEXT_EQ(subject->GetCodeByKeyPosition(16), 0x04);
		EXPEXT_EQ(subject->GetCodeByKeyPosition(17), 0x05);
		EXPEXT_EQ(subject->GetCodeByKeyPosition(18), 0x06);
		EXPEXT_EQ(subject->GetCodeByKeyPosition(21), 0x01);
		EXPECT_EQ(subject->GetCodeByKeyPosition(22), 0x02);
		EXPECT_EQ(subject->GetCodeByKeyPosition(23), 0x03);
		EXPECT_EQ(subject->GetCodeByKeyPosition(26), 0x00);
	}
}

namespace functional_keys {
	TEST_F(Keyboard, SetsPressedStatusForF) {
		subject->PressByPosition(1);
		EXPECT_EQ(subject->IsFPressed, true);
	}

	TEST_F(Keyboard, SetsPressedStatusForK) {
		subject->PressByPosition(6);
		EXPECT_EQ(subject->IsKPressed, true);
	}

	TEST_F(Keyboard, SettingFResetsPreviouslySetK) {
		subject->IsKPressed = true;

	}
}

namespace 