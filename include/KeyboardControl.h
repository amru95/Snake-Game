#ifndef KEYBOARDCONTROL_H
#define KEYBOARDCONTROL_H
#include "Snake.h"

class KeyboardControl
{
    #define KB_UP 72
    #define KB_DOWN 80
    #define KB_LEFT 75
    #define KB_RIGHT 77
    #define KB_ESCAPE 27
    #define KB_ENTER 13
    public:
        void update(Snake& s);
};

#endif // KEYBOARDCONTROL_H
