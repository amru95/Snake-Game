#include "Food.h"
#include "Coordinate2D.h"
#include <time.h>
 
int Food :: random(int min, int max){
    static bool first = true;
    if ( first ){
        srand(time(NULL));
        first = false;
    }
    return min + rand() % (max - min);
}
 
bool Food :: OccupiedPlace(Snake s, Coordinate2D suggestedPlace ){
    for(int i=0;i<s.Length;i++)
        if(s.Body[i] == suggestedPlace)
            return true;
    return false;
}
 
void Food :: Intalize(const Snake& snake){
    int GetXposition,GetYposition;
    Coordinate2D suggestedPoint;
    do{
        GetXposition = random(2,77);   /// left edge + 2   till right edge -1
        GetYposition = random(2,22);   /// Top edge + 1   till right edge -1
        suggestedPoint.set(GetXposition,GetYposition);
    }
    while(OccupiedPlace(snake,suggestedPoint));
 
    apple.setPosition(suggestedPoint);
}
 
void Food :: Draw(){
    apple.Draw();
}
