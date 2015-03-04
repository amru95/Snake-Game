#ifndef FOOD_H
#define FOOD_H

class Food
{
    private:
        Brick apple;

    public:
        int random(int min, int max){
            static bool first = true;
            if ( first ){
                srand(time(NULL));
                first = false;
            }
            return min + rand() % (max - min);
        }
        bool OccupiedPlace(Snake s, Coordinate2D suggestedPlace ){
            for(int i=0;i<s.Length;i++)
                if(s.Body[i] == suggestedPlace)
                    return true;
            return false;
        }
        void Intalize(const Snake& snake){
            int GetXposition,GetYposition;
            Coordinate2D suggestedPoint;
            do{
                GetXposition = random(2,77);
                GetYposition = random(2,22);
                suggestedPoint.set(GetXposition,GetYposition);
            }
            while(OccupiedPlace(snake,suggestedPoint));

            apple.setPosition(suggestedPoint);
        }
        void Draw(){
            apple.Draw();
        }

friend class Game;
};

#endif // FOOD_H