#pragma once

#include "VirtualMethod.h"

class InputSystem {
public:
    VIRTUAL_METHOD(void, enableInput, 11, (bool enable), (this, enable))
    VIRTUAL_METHOD(bool, isButtonDown, 15, (int buttonCode), (this, buttonCode))
    VIRTUAL_METHOD(void, resetInputState, 39, (), (this))
    VIRTUAL_METHOD(const char*, buttonCodeToString, 40, (int buttonCode), (this, buttonCode))
};
