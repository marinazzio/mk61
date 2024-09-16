#pragma once
#include <cstdint>

public ref class Keyboard
{
public:
    Keyboard();
    virtual ~Keyboard();

	property bool IsFPressed;
    property bool IsKPressed;

	property uint8_t CmdBuffer;

    int GetCodeByKeyPosition(int keyPosition);
	void PressByPosition(int keyPosition);
};
