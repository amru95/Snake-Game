#include "Brick.h"
#include <windows.h>
 
void Brick :: Draw(){
    COORD coord;
    coord.X = this->x;
    coord.Y = this->y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord) ;
    std :: cout << char(177);
}
 
void Brick :: setPosition(int x1, int y1){
    this->x = x1;
    this->y = y1;
}
 
void Brick :: setPosition(Brick position){
    this->x = position.x;
    this->y = position.y;
}
 
void Brick :: setPosition(Coordinate2D position){
    this->x = position.x;
    this->y = position.y;
}
