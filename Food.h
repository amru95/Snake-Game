#ifndef FOOD_H
#define FOOD_H

class Food
{
    private:
        Brick apple;

    public:
        int random(int min, int max);
        bool OccupiedPlace(Snake s, Coordinate2D suggestedPlace );
        void Intalize(const Snake& snake);
        void Draw();

friend class Game;
};

#endif // FOOD_H
