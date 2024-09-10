#pragma once

public ref class Keyboard
{
public:
    Keyboard();
    virtual ~Keyboard();

	property bool IsFPressed;
    property bool IsKPressed;

    int GetCodeByKeyPosition(int keyPosition);
};
