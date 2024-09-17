#pragma once

#ifdef KEYBOARD_EXPORTS
#define KEYBOARD_API __declspec(dllexport)
#else
#define KEYBOARD_API __declspec(dllimport)
#endif

#include <cstdint>

public ref class Keyboard
{
public:
    KEYBOARD_API Keyboard();
    KEYBOARD_API ~Keyboard();

	property bool IsFPressed;
    property bool IsKPressed;

	property uint8_t CmdBuffer;

    KEYBOARD_API int GetCodeByKeyPosition(int keyPosition);
    KEYBOARD_API void PressByPosition(int keyPosition);
};
