#include "Coordinate2D.h"
 
void Coordinate2D :: set(int x1, int y1) {
    x = x1;
    y = y1;
}
 
bool Coordinate2D :: operator == (const Coordinate2D& v2){
    return(x == v2.x && y == v2.y);
}
