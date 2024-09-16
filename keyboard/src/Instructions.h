#pragma once

#include <cstdint>

namespace Instructions {
    const uint8_t CMD_DIG_0 = 0x00;
    const uint8_t CMD_DIG_1 = 0x01;
    const uint8_t CMD_DIG_2 = 0x02;
    const uint8_t CMD_DIG_3 = 0x03;
    const uint8_t CMD_DIG_4 = 0x04;
    const uint8_t CMD_DIG_5 = 0x05;
    const uint8_t CMD_DIG_6 = 0x06;
    const uint8_t CMD_DIG_7 = 0x07;
    const uint8_t CMD_DIG_8 = 0x08;
    const uint8_t CMD_DIG_9 = 0x09;
    const uint8_t CMD_COMMA = 0x0A;
    const uint8_t CMD_SIGN = 0x0B;
    const uint8_t CMD_EXPONENT = 0x0C;
    const uint8_t CMD_RESET_X = 0x0D;
    const uint8_t CMD_PUSH = 0x0E;
	const uint8_t CMD_POP_X1 = 0x0F;

    const uint8_t CMD_ADD = 0x10;
    const uint8_t CMD_SUBTRACT = 0x11;
    const uint8_t CMD_MULTIPLY = 0x12;
    const uint8_t CMD_DIVIDE = 0x13;
    const uint8_t CMD_SWITCH_XY = 0x14;
    const uint8_t CMD_F_10_X = 0x15;
    const uint8_t CMD_F_E_X = 0x16;
    const uint8_t CMD_F_LG = 0x17;
    const uint8_t CMD_F_LN = 0x18;
    const uint8_t CMD_F_ARCSIN = 0x19;
    const uint8_t CMD_F_ARCCOS = 0x1A;
    const uint8_t CMD_F_ARCTAN = 0x1B;
    const uint8_t CMD_F_SIN = 0x1C;
    const uint8_t CMD_F_COS = 0x1D;
    const uint8_t CMD_F_TAN = 0x1E;

    const uint8_t CMD_F_PI = 0x20;
    const uint8_t CMD_F_SQRT = 0x21;
    const uint8_t CMD_F_SQR = 0x22;
    const uint8_t CMD_F_RECIPROCAL = 0x23;
    const uint8_t CMD_F_X_POW_Y = 0x24;
	const uint8_t CMP_F_CYCLE = 0x25; // cycle stack
	const uint8_t CMD_K_SXDS_TO_DEC = 0x26; // Sexagesimal to decimal
	const uint8_t CMD_K_SQRT = 0x27; // undocumented
	const uint8_t CMD_K_SQR = 0x28; // undocumented
	const uint8_t CMD_K_RECIPROCAL = 0x29; // undocumented
	const uint8_t CMD_K_SXDS_TO_DEC_FULL = 0x2A; // Sexagesimal to decimal full
	//
	//
	//
	//

	const uint8_t CMD_K_DEC_TO_SXDS_FULL = 0x30;
	const uint8_t CMD_K_ABS = 0x31;
	const uint8_t CMD_K_SIGN = 0x32;
	const uint8_t CMD_K_DEC_TO_SXDS = 0x33; // Decimal to sexagesimal
	const uint8_t CMD_K_INT = 0x34;
	const uint8_t CMD_K_FRAC = 0x35;
	const uint8_t CMD_K_MAX = 0x36;
	const uint8_t CMD_K_AND = 0x37;
	const uint8_t CMD_K_OR = 0x38;
	const uint8_t CMD_K_XOR = 0x39;
	const uint8_t CMD_K_NOT = 0x3A;
	const uint8_t CMD_K_RND = 0x3B;
	//
	//
	//

    const uint8_t CMD_PUT_0 = 0x40;
	const uint8_t CMD_PUT_1 = 0x41;
	const uint8_t CMD_PUT_2 = 0x42;
	const uint8_t CMD_PUT_3 = 0x43;
	const uint8_t CMD_PUT_4 = 0x44;
	const uint8_t CMD_PUT_5 = 0x45;
	const uint8_t CMD_PUT_6 = 0x46;
	const uint8_t CMD_PUT_7 = 0x47;
	const uint8_t CMD_PUT_8 = 0x48;
	const uint8_t CMD_PUT_9 = 0x49;
	const uint8_t CMD_PUT_A = 0x4A;
	const uint8_t CMD_PUT_B = 0x4B;
	const uint8_t CMD_PUT_C = 0x4C;
	const uint8_t CMD_PUT_D = 0x4D;
	const uint8_t CMD_PUT_E = 0x4E;

    const uint8_t CMD_START_STOP = 0x50;
    const uint8_t CMD_GOTO = 0x51;
    const uint8_t CMD_RETURN = 0x52;
    const uint8_t CMD_GOSUB = 0x53;
	const uint8_t CMD_K_NOP = 0x54;
	const uint8_t CMD_K_E_X = 0x55;
	const uint8_t CMD_K_LG = 0x56;
	const uint8_t CMD_F_X_NE0 = 0x57;
	const uint8_t CMD_F_L2 = 0x58;
	const uint8_t CMD_F_X_GTE0 = 0x59;
	const uint8_t CMD_F_L3 = 0x5A;
	const uint8_t CMD_F_L1 = 0x5B;
    const uint8_t CMD_F_X_LT0 = 0x5C;
    const uint8_t CMD_F_L0 = 0x5D;
	const uint8_t CMD_F_X_EQ0 = 0x5E;

	const uint8_t CMD_GET_0 = 0x60;
	const uint8_t CMD_GET_1 = 0x61;
	const uint8_t CMD_GET_2 = 0x62;
	const uint8_t CMD_GET_3 = 0x63;
	const uint8_t CMD_GET_4 = 0x64;
	const uint8_t CMD_GET_5 = 0x65;
	const uint8_t CMD_GET_6 = 0x66;
	const uint8_t CMD_GET_7 = 0x67;
	const uint8_t CMD_GET_8 = 0x68;
	const uint8_t CMD_GET_9 = 0x69;
	const uint8_t CMD_GET_A = 0x6A;
	const uint8_t CMD_GET_B = 0x6B;
	const uint8_t CMD_GET_C = 0x6C;
	const uint8_t CMD_GET_D = 0x6D;
	const uint8_t CMD_GET_E = 0x6E;

	const uint8_t CMD_K_X_NE0_0 = 0x70;
	const uint8_t CMD_K_X_NE0_1 = 0x71;
	const uint8_t CMD_K_X_NE0_2 = 0x72;
	const uint8_t CMD_K_X_NE0_3 = 0x73;
	const uint8_t CMD_K_X_NE0_4 = 0x74;
	const uint8_t CMD_K_X_NE0_5 = 0x75;
	const uint8_t CMD_K_X_NE0_6 = 0x76;
	const uint8_t CMD_K_X_NE0_7 = 0x77;
	const uint8_t CMD_K_X_NE0_8 = 0x78;
	const uint8_t CMD_K_X_NE0_9 = 0x79;
	const uint8_t CMD_K_X_NE0_A = 0x7A;
	const uint8_t CMD_K_X_NE0_B = 0x7B;
	const uint8_t CMD_K_X_NE0_C = 0x7C;
	const uint8_t CMD_K_X_NE0_D = 0x7D;
	const uint8_t CMD_K_X_NE0_E = 0x7E;

	const uint8_t CMD_K_GOTO_0 = 0x80;
	const uint8_t CMD_K_GOTO_1 = 0x81;
	const uint8_t CMD_K_GOTO_2 = 0x82;
	const uint8_t CMD_K_GOTO_3 = 0x83;
	const uint8_t CMD_K_GOTO_4 = 0x84;
	const uint8_t CMD_K_GOTO_5 = 0x85;
	const uint8_t CMD_K_GOTO_6 = 0x86;
	const uint8_t CMD_K_GOTO_7 = 0x87;
	const uint8_t CMD_K_GOTO_8 = 0x88;
	const uint8_t CMD_K_GOTO_9 = 0x89;
	const uint8_t CMD_K_GOTO_A = 0x8A;
	const uint8_t CMD_K_GOTO_B = 0x8B;
	const uint8_t CMD_K_GOTO_C = 0x8C;
	const uint8_t CMD_K_GOTO_D = 0x8D;
	const uint8_t CMD_K_GOTO_E = 0x8E;

	const uint8_t CMD_K_X_GTE0_0 = 0x90;
	const uint8_t CMD_K_X_GTE0_1 = 0x91;
	const uint8_t CMD_K_X_GTE0_2 = 0x92;
	const uint8_t CMD_K_X_GTE0_3 = 0x93;
	const uint8_t CMD_K_X_GTE0_4 = 0x94;
	const uint8_t CMD_K_X_GTE0_5 = 0x95;
	const uint8_t CMD_K_X_GTE0_6 = 0x96;
	const uint8_t CMD_K_X_GTE0_7 = 0x97;
	const uint8_t CMD_K_X_GTE0_8 = 0x98;
	const uint8_t CMD_K_X_GTE0_9 = 0x99;
	const uint8_t CMD_K_X_GTE0_A = 0x9A;
	const uint8_t CMD_K_X_GTE0_B = 0x9B;
	const uint8_t CMD_K_X_GTE0_C = 0x9C;
	const uint8_t CMD_K_X_GTE0_D = 0x9D;
	const uint8_t CMD_K_X_GTE0_E = 0x9E;

	const uint8_t CMD_K_GOSUB_0 = 0xA0;
	const uint8_t CMD_K_GOSUB_1 = 0xA1;
	const uint8_t CMD_K_GOSUB_2 = 0xA2;
	const uint8_t CMD_K_GOSUB_3 = 0xA3;
	const uint8_t CMD_K_GOSUB_4 = 0xA4;
	const uint8_t CMD_K_GOSUB_5 = 0xA5;
	const uint8_t CMD_K_GOSUB_6 = 0xA6;
	const uint8_t CMD_K_GOSUB_7 = 0xA7;
	const uint8_t CMD_K_GOSUB_8 = 0xA8;
	const uint8_t CMD_K_GOSUB_9 = 0xA9;
	const uint8_t CMD_K_GOSUB_A = 0xAA;
	const uint8_t CMD_K_GOSUB_B = 0xAB;
	const uint8_t CMD_K_GOSUB_C = 0xAC;
	const uint8_t CMD_K_GOSUB_D = 0xAD;
	const uint8_t CMD_K_GOSUB_E = 0xAE;

	const uint8_t CMD_K_PUT_0 = 0xB0;
	const uint8_t CMD_K_PUT_1 = 0xB1;
	const uint8_t CMD_K_PUT_2 = 0xB2;
	const uint8_t CMD_K_PUT_3 = 0xB3;
	const uint8_t CMD_K_PUT_4 = 0xB4;
	const uint8_t CMD_K_PUT_5 = 0xB5;
	const uint8_t CMD_K_PUT_6 = 0xB6;
	const uint8_t CMD_K_PUT_7 = 0xB7;
	const uint8_t CMD_K_PUT_8 = 0xB8;
	const uint8_t CMD_K_PUT_9 = 0xB9;
	const uint8_t CMD_K_PUT_A = 0xBA;
	const uint8_t CMD_K_PUT_B = 0xBB;
	const uint8_t CMD_K_PUT_C = 0xBC;
	const uint8_t CMD_K_PUT_D = 0xBD;
	const uint8_t CMD_K_PUT_E = 0xBE;

	const uint8_t CMD_K_X_LT0_0 = 0xC0;
	const uint8_t CMD_K_X_LT0_1 = 0xC1;
	const uint8_t CMD_K_X_LT0_2 = 0xC2;
	const uint8_t CMD_K_X_LT0_3 = 0xC3;
	const uint8_t CMD_K_X_LT0_4 = 0xC4;
	const uint8_t CMD_K_X_LT0_5 = 0xC5;
	const uint8_t CMD_K_X_LT0_6 = 0xC6;
	const uint8_t CMD_K_X_LT0_7 = 0xC7;
	const uint8_t CMD_K_X_LT0_8 = 0xC8;
	const uint8_t CMD_K_X_LT0_9 = 0xC9;
	const uint8_t CMD_K_X_LT0_A = 0xCA;
	const uint8_t CMD_K_X_LT0_B = 0xCB;
	const uint8_t CMD_K_X_LT0_C = 0xCC;
	const uint8_t CMD_K_X_LT0_D = 0xCD;
	const uint8_t CMD_K_X_LT0_E = 0xCE;

	const uint8_t CMD_K_GET_0 = 0xD0;
	const uint8_t CMD_K_GET_1 = 0xD1;
	const uint8_t CMD_K_GET_2 = 0xD2;
	const uint8_t CMD_K_GET_3 = 0xD3;
	const uint8_t CMD_K_GET_4 = 0xD4;
	const uint8_t CMD_K_GET_5 = 0xD5;
	const uint8_t CMD_K_GET_6 = 0xD6;
	const uint8_t CMD_K_GET_7 = 0xD7;
	const uint8_t CMD_K_GET_8 = 0xD8;
	const uint8_t CMD_K_GET_9 = 0xD9;
	const uint8_t CMD_K_GET_A = 0xDA;
	const uint8_t CMD_K_GET_B = 0xDB;
	const uint8_t CMD_K_GET_C = 0xDC;
	const uint8_t CMD_K_GET_D = 0xDD;
	const uint8_t CMD_K_GET_E = 0xDE;

	const uint8_t CMD_K_X_EQ0_0 = 0xE0;
	const uint8_t CMD_K_X_EQ0_1 = 0xE1;
	const uint8_t CMD_K_X_EQ0_2 = 0xE2;
	const uint8_t CMD_K_X_EQ0_3 = 0xE3;
	const uint8_t CMD_K_X_EQ0_4 = 0xE4;
	const uint8_t CMD_K_X_EQ0_5 = 0xE5;
	const uint8_t CMD_K_X_EQ0_6 = 0xE6;
	const uint8_t CMD_K_X_EQ0_7 = 0xE7;
	const uint8_t CMD_K_X_EQ0_8 = 0xE8;
	const uint8_t CMD_K_X_EQ0_9 = 0xE9;
	const uint8_t CMD_K_X_EQ0_A = 0xEA;
	const uint8_t CMD_K_X_EQ0_B = 0xEB;
	const uint8_t CMD_K_X_EQ0_C = 0xEC;
	const uint8_t CMD_K_X_EQ0_D = 0xED;
	const uint8_t CMD_K_X_EQ0_E = 0xEE;

	//
	//
	//
	const uint8_t CMD_STEP_FF = 0xF3;
	const uint8_t CMD_STEP_RR = 0xF4;
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
    const uint8_t CMD_F_CF = 0xFF;
};
