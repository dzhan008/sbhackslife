#ifndef CARD_CPP_H
#define CARD_CPP_H
#include "Point.h"
#include <string>
#include <vector>

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

    vector<int>puzzlecheck;
    vector<int>crisischeck;
    vector<int>lifecheck;


    public:
        Card();
        int drawCard();
        Point Puzzle(Point);
        Point Crisis(Point);
        Point Life(Point);
        Point PuzzleDisplay(int, Point);
        Point CrisisDisplay(int, Point);
        Point LifeDisplay (int, Point);
        bool cardcheck(vector<int>, int);



};

#endif // CARD_CPP_H
