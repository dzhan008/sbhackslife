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
        int drawCard();
        void Puzzle();
        void Crisis();
        void Life();
        void PuzzleDisplay(int);
        void CrisisDisplay(int);
        Point LifeDisplay(int);



};

#endif // CARD_CPP_H
