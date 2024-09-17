#include <gtest/gtest.h>
#include <msclr/gcroot.h>

#include "../src/Keyboard.h"
#include "../src/KeyPositions.h"
#include "../src/Instructions.h"

class KeyboardTest : public ::testing::Test {
protected:
	msclr::gcroot<Keyboard^> subject;

	void SetUp() override {
		subject = gcnew Keyboard();
	}

	void TearDown() override {
		delete subject;
	}
};

class KeyboardTestWithF : public KeyboardTest {
protected:
	void SetUp() override {
		KeyboardTest::SetUp();
		subject->IsFPressed = true;
	}
};

class KeyboardTestWithK : public KeyboardTest {
protected:
	void SetUp() override {
		KeyboardTest::SetUp();
		subject->IsKPressed = true;
	}
};

using namespace KeyPositions;
using namespace Instructions;
// 11, 12, 13
// 16, 17, 18
// 21, 22, 23
// 26
namespace keyboard_digits {
	TEST_F(KeyboardTest, ReturnsProperCodeForSingleNumber) {
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_0), CMD_DIG_0);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_1), CMD_DIG_1);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_2), CMD_DIG_2);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_3), CMD_DIG_3);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_4), CMD_DIG_4);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_5), CMD_DIG_5);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_6), CMD_DIG_6);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_7), CMD_DIG_7);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_8), CMD_DIG_8);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIG_9), CMD_DIG_9);
	}
}

namespace keyboard_non_digits {
	TEST_F(KeyboardTest, ReturnsProperCodeForSingleButton) {
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_SUBTRACT), CMD_SUBTRACT);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_DIVIDE), CMD_DIVIDE);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_ADD), CMD_ADD);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_MULTIPLY), CMD_MULTIPLY);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_SWITCH_XY), CMD_SWITCH_XY);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_PUSH), CMD_PUSH);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_COMMA), CMD_COMMA);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_SIGN), CMD_SIGN);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_EXPONENT), CMD_EXPONENT);
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_RESET_X), CMD_RESET_X);

		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_START_STOP), CMD_START_STOP);
	}
}

namespace functional_keys {
	TEST_F(KeyboardTest, SetsPressedStatusForF) {
		subject->PressByPosition(BTN_KEY_F);
		EXPECT_EQ(subject->IsFPressed, true);
	}

	TEST_F(KeyboardTest, SetsPressedStatusForK) {
		subject->PressByPosition(BTN_KEY_K);
		EXPECT_EQ(subject->IsKPressed, true);
	}

	TEST_F(KeyboardTest, SettingFResetsPreviouslySetK) {
		subject->IsKPressed = true;
		subject->PressByPosition(BTN_KEY_F);
		EXPECT_EQ(subject->IsKPressed, false);
		EXPECT_EQ(subject->IsFPressed, true);
	}

	// control keys:
	// step ff (BTN_STEP_FF)
	// moves program pointer forward by 1
	TEST_F(KeyboardTest, StepFF) {
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_STEP_FF), CMD_STEP_FF);
	}

	// step rr (BTN_STEP_RR)
	// moves program pointer backward by 1
	TEST_F(KeyboardTest, StepRR) {
		EXPECT_EQ(subject->GetCodeByKeyPosition(BTN_STEP_RR), CMD_STEP_RR);
	}
}

namespace keys_on_f_pressed {
	TEST_F(KeyboardTestWithF, FunctionSinus) {
		subject->PressByPosition(BTN_DIG_7);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_SIN);
	}

	TEST_F(KeyboardTestWithF, FunctionCosinus) {
		subject->PressByPosition(BTN_DIG_8);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_COS);
	}

	TEST_F(KeyboardTestWithF, FunctionTangens) {
		subject->PressByPosition(BTN_DIG_9);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_TAN);
	}

	TEST_F(KeyboardTestWithF, FunctionArcsinus) {
		subject->PressByPosition(BTN_DIG_4);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_ARCSIN);
	}

	TEST_F(KeyboardTestWithF, FunctionArccosinus) {
		subject->PressByPosition(BTN_DIG_5);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_ARCCOS);
	}

	TEST_F(KeyboardTestWithF, FunctionArctangens) {
		subject->PressByPosition(BTN_DIG_6);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_ARCTAN);
	}

	TEST_F(KeyboardTestWithF, FunctionEPowX) {
		subject->PressByPosition(BTN_DIG_1);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_E_X);
	}

	TEST_F(KeyboardTestWithF, FunctionLg) {
		subject->PressByPosition(BTN_DIG_2);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_LG);
	}

	TEST_F(KeyboardTestWithF, FunctionLn) {
		subject->PressByPosition(BTN_DIG_3);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_LN);
	}

	TEST_F(KeyboardTestWithF, Function10PowX) {
		subject->PressByPosition(BTN_DIG_0);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_10_X);
	}

	// SQRT

	// RECIPROCAL

	TEST_F(KeyboardTestWithF, FunctionPi) {
		subject->PressByPosition(BTN_ADD);
		EXPECT_EQ(subject->CmdBuffer, CMD_F_PI);
	}

	// SQR

	// X^Y

	// pop X1

	// cycle stack
}

namespace keys_on_k_pressed
{
	TEST_F(KeyboardTestWithK, FunctionIntegerPart) {
		subject->PressByPosition(BTN_DIG_7);
		EXPECT_EQ(subject->CmdBuffer, CMD_K_INT);
	};

	// Fractional part

	// Max value

	// absolute value

	// sign

	// decimal to sexagesimal

	// sexagesimal to decimal

	// decimal to sexagesimal full

	// sexagesimal to decimal full

	// random

	// no operation

	// AND

	// OR

	// XOR

	// NOT
}

namespace non_commands {
	// reset F
	TEST_F(KeyboardTest, ResetsF) {
		subject->IsFPressed = true;
		subject->PressByPosition(BTN_RESET_X);
		EXPECT_EQ(subject->IsFPressed, false);
	}

	// prog mode

	// interpreter mode
}

namespace commands_with_argument {
	TEST_F(KeyboardTest, WriteMemory0) {
		subject->PressByPosition(BTN_PUT);
		subject->PressByPosition(BTN_DIG_0);

		EXPECT_EQ(subject->CmdBuffer, CMD_PUT_0);
	}
}
