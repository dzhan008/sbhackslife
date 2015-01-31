#ifndef CARD_CPP_H
#define CARD_CPP_H
#include "Point.h"
#include <string>

using namespace std;

class Card
{
    private:
    struct Cards
    {
        string Type;
        string Event;
        string choices;
        int ID;

    };


    public:
        Card();
        int drawCard(Point);
        void Puzzle(Point);
        void Crisis(Point);
        void Life(Point);
        Point PuzzleDisplay(int);
        Point CrisisDisplay(int, Point);
        Point LifeDisplay (int, Point);



};

#endif // CARD_CPP_H
