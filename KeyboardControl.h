#ifndef KEYBOARDCONTROL_H
#define KEYBOARDCONTROL_H

class KeyboardControl
{
    #define KB_UP 72
    #define KB_DOWN 80
    #define KB_LEFT 75
    #define KB_RIGHT 77
    #define KB_ESCAPE 27
    #define KB_ENTER 13
    public:
        void update(Snake& s){
            char key = _getch();
            if (key== -32)
            {
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
                while(_getch() != KB_ENTER){}  // pause
        }
};

#endif // KEYBOARDCONTROL_H