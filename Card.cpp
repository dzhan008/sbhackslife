#include "Card.h"
#include "Point.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

Card::Card()
{

}


int Card::drawCard()
{
    time(0);

    return rand() % 3 + 1;

}

void Card::Puzzle()
{
    int ID = rand() % 10 + 1;
    PuzzleDisplay(ID);
}

void Card::Crisis()
{
    int ID = rand() % 10 + 1;
    CrisisDisplay(ID);
}

void Card::Life()
{
    int ID = rand() % 10 + 1;
    LifeDisplay(ID);
}

void Card::PuzzleDisplay(int ID)
{
    if (ID == 1)
    {

    }
}

void Card::CrisisDisplay(int ID)
{

}

Point Card::LifeDisplay(int ID)
{
    int choice;
    Point points;

    if(ID == 1)
    {
        cout << "Your child has been borne! As you hold the screeching," << endl;
        cout << "plum-like little boy in your arms, he vomits on your face." << endl;
        cout << "You: " << endl;
        cout << "1. Wipe off the barf and cuddle him. He's your son after all!" << endl;
        cout << "2. Plop him into the mother's arms. It's her turn to hold him anyway." << endl;
        cout << "3. Roar in disgust and proceed to drop-kick out of window." << endl;
        cout << "   You knew you wanted a girl. This is why." << endl;

        cin >> choice;
        if(choice == 1)
        {
            points.LifeIncrement(1);
            points.GoodIncrement(1);
        }
        else if (choice == 2)
        {
            points.EvilIncrement(1);
        }
        else if (choice == 3)
        {
            points.DeathIncrement(1);
            points.EvilIncrement(2);
            points.GoodIncrement(1);
        }
    }

    return points;
}
