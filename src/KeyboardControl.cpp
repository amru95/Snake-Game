#include "KeyboardControl.h"
#include <cstdlib>
#include <conio.h>

void KeyboardControl :: update(Snake& s){
    char key = _getch();
    if (key== -32){
        key=_getch();
        switch(key){
            case KB_UP:
                if(s.SnakeDirection != s.Down )
                    s.SnakeDirection = s.Up;
                break;
            case KB_DOWN:
                if(s.SnakeDirection != s.Up)
                    s.SnakeDirection = s.Down;
                break;
            case KB_RIGHT:
                if(s.SnakeDirection != s.Left)
                    s.SnakeDirection = s.Right;
                break;
            case KB_LEFT:
                if(s.SnakeDirection != s.Right)
                    s.SnakeDirection = s.Left;
                break;
        }
    }
    else if(key ==  KB_ESCAPE)
        exit(0);

    else if(key == KB_ENTER)
        while(_getch() != KB_ENTER){}  /// pause
}
