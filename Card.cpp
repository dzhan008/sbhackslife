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
    return rand() % 3 + 1;

}

Point Card::Puzzle(Point curr_point)
{
    int ID = rand() % 10 + 1;
    curr_point = PuzzleDisplay(ID, curr_point);
    return curr_point;
}

Point Card::Crisis(Point curr_point)
{
    int ID = rand() % 10 + 1;
    curr_point = CrisisDisplay(ID, curr_point);
    return curr_point;
}

Point Card::Life(Point curr_point)
{
    int ID = rand() % 10 + 1;
    curr_point = LifeDisplay(ID, curr_point);
    return curr_point;
}

Point Card::PuzzleDisplay(int ID, Point curr_points)
{
    int choice;
    Point points = curr_points;
    if(ID == 1)
    {
        cout << "You've entered the world as a newborn baby, just old enough to talk." << endl;
        cout << "Your mother leans over you, trying to get you to say \"Mama\". You say " << endl;
        cout << "1. ****" << endl;
        cout << "2. Mama!" << endl;
        cout << "3. Dada!" << endl;
        cout << "4. You begin crying!" << endl;

        cin >> choice;
        if(choice == 1)
        {
            points.LifeIncrement(1);
            points.EvilIncrement(1);
        }
        else if (choice == 2)
        {
            points.GoodIncrement(1);
            points.LifeIncrement(1);
        }
        else if (choice == 3)
        {
            points.LifeIncrement(1);
            points.GoodIncrement(1);
        }
        else if (choice == 4)
        {
            points.LifeIncrement(1);
        }
    }
    if(ID == 2)
    {
        std::cout << "Your teacher calls you up to do this math problem. What is 1 + 1?" << std::endl;
        std::cout << "1. TWOOOOOOOOOOOOOO!" << std::endl;
        std::cout << "2. Two. Only an idiot would get that question wrong." << std::endl;
        std::cout << "3. Two." << std::endl;
        std::cout << "4. Window!" << std::endl;

        cin >> choice;

        if(choice == 1)
        {
            points.GoodIncrement(2);
        }
        else if(choice == 2)
        {
            points.EvilIncrement(1);
        }
        else if(choice == 3)
        {
            points.GoodIncrement(1);
        }
        else if(choice == 4)
        {
            points.DeathIncrement(1);
        }
    }
    return points;
}


Point Card::CrisisDisplay(int ID, Point  curr_points)
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
                if(choice == 4)
                {
                    points.DeathIncrement(5);
                }

    }
    else if (ID == 2)
    {
        std::cout << "You open a door for someone, but he passes by without even thanking you! What do you do?!" << std::endl;
        std::cout << "1. Forget about it. He was probably in a hurry." << std::endl;
        std::cout << "2. Stab him and rip open his chest, eating his beating heart with your bare hands." << std::endl;
        std::cout << "3. Yell at the man, approaching him with a stern face. Proceed to lecture him." << std::endl;

        std::cin >> choice;

        if(choice == 1)
        {
            points.GoodIncrement(1);
        }
        else if(choice == 2)
        {
            points.GoodIncrement(5);
        }
        else if(choice == 3)
        {
            points.LifeIncrement(1);
            points.GoodIncrement(1);
        }
    }
    return points;
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
