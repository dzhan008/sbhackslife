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

void Card::Puzzle(Point curr_point)
{
    int ID = rand() % 10 + 1;
    PuzzleDisplay(ID, curr_point);
}

void Card::Crisis(Point curr_point)
{
    int ID = rand() % 10 + 1;
    CrisisDisplay(ID, curr_point);
}

void Card::Life(Point curr_point)
{
    int ID = rand() % 10 + 1;
    LifeDisplay(ID, curr_point);
}

Point Card::PuzzleDisplay(int ID)
{
    if (ID == 1)
    {

    }
}

Point Card::CrisisDisplay(int ID, Point curr_points)
{
    int choice;
    Point points = curr_points;
    if(ID == 1)
    {
        /*Crisis:*/ std::cout << "As you come home you notice your house is in flames. What do you do? Answer quickly!\n";
        /*Choices: */std::cout << "1: Save your family trapped inside!!\n"; //(+Death, +2 Good)
                std::cout << "2: Run away from your family trapped inside!!\n"; //(+Life, + Evil)

                std::cout << "3: Run around laughing because your house and health is insured.\n"; //(+Good +Life)
                std::cout << "4: Run into flames in a wild panic\n"; //(+5 Death)
                cin >> choice;
                if(choice == 1)
                {
                    points.DeathIncrement(1);
                    points.GoodIncrement(2);
                }
                if(choice == 2)
                {
                    points.LifeIncrement(1);
                    points.EvilIncrement(1);
                }
                if(choice == 3)
                {
                    points.GoodIncrement(1);
                    points.LifeIncrement(1);
                }

    }
}

Point Card::LifeDisplay (int ID, Point curr_points)
{
    int choice;
    Point points = curr_points;

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
