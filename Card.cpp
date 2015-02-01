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
        cout << "1. Poop!" << endl;
        cout << "2. Mama!" << endl;
        cout << "3. Dada!" << endl;
        cout << "4. You begin crying." << endl;

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
        std::cout << "1. Two, ma'am O:\)" << std::endl;
        std::cout << "2. Two. Even a baby would know that." << std::endl;
        std::cout << "3. Two." << std::endl;
        std::cout << "4. Window?" << std::endl;

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
    if(ID == 3)
    {
        std::cout << "Philosophy professor gives final exam: Why is life so hard?\n";
        std::cout << "1: Because the struggle is life.\n";
        std::cout << "2: Life is easy!\n";
        std::cout << "3: Life is but a series of choices: People like making bad ones.\n";
        std::cout << "4: Life is a series of unfortunate events, never benefitting me.\n";
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
            points.LifeIncrement(1);
        }
        else if (choice == 4)
        {
            points.DeathIncrement(2);
        }

    }
    if(ID == 4)
    {
        std::cout << "You have graduated from high school and wonder where you will go.\n";
        std::cout << "1: College because nothing can go wrong with higher education!\n";
        std::cout << "2: Work as a garbageman or In N Out manager. Those pay well.\n";
        std::cout << "3: I didn't choose the Thuglyfe the Thuglyfe chose me.\n";
        std::cout << "4: Live in parent's basement.\n";
        cin >> choice;
        if(choice == 1)
        {
            points.GoodIncrement(2);
        }
        else if(choice == 2)
        {
            points.LifeIncrement(1);
        }
        else if(choice == 3)
        {
            points.DeathIncrement(2);
        }
        else if (choice == 4)
        {
            points.DeathIncrement(1);
        }

    }
    if(ID == 5)
    {
        std::cout << "You the last question of Who Wants to Be a Millionaire. \n";
        std::cout << "How was the Universe believed to be made?\n";
        std::cout << "1: God. Nonbelievers shall die in brimstone and hellfire!\n";
        std::cout << "2: The Big Bang Theory. Not the show.\n";
        std::cout << "3: The Big Bang. If you know what I mean. >u<  \n";
        std::cout << "4: I don't know and neither do you.\n";
        cin >> choice;
        if(choice == 1)
        {
            points.GoodIncrement(1);
            points.LifeIncrement(-1);
        }
        else if(choice == 2)
        {
            points.LifeIncrement(2);
        }
        else if(choice == 3)
        {
            points.EvilIncrement(2);
        }
        else if (choice == 4)
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
        std::cout << "2. Hope that he will rue the day that he insulted your very existence." << std::endl;
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
    if (ID == 3)
    {
        std::cout << "You are on a honeymoon. You see the most beautiful person. What do you do?\n";
        //std::cout << "\n";
        std::cout << "1: Stay faithful. Till Death do us part.\n";
        std::cout << "2: Death does do us part. Indeed.\n";
        std::cout << "3: Cheat.\n";
        std::cout << "4: Invite for a hot night together, the three of us.\n";
        cin >> choice;
        if(choice == 1)
        {
            points.GoodIncrement(2);
        }
        else if(choice == 2)
        {
            points.EvilIncrement(5);
        }
        else if(choice == 3)
        {
            points.DeathIncrement(2);
        }
        else if (choice == 4)
        {
            points.LifeIncrement(1);
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
        cout << "3. Roar in disgust and proceed to put child up for adoption." << endl;
        cout << "4. You knew you wanted a girl. This is why." << endl;

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
        if(ID == 2)
    {
        cout << "You're getting your gray hairs now and it's time to retire." << endl;
        cout << "You've worked at an office job and have made some good friends." << endl;
        cout << "How do you want to leave your workplace?" << endl;
        cout << "1. Enjoy the mediocre retirement party thrown by the boss and friends." << endl;
        cout << "2. Go out with a bang-cursing your boss's hide and trashing the office." << endl;
        cout << "3. Make sure everyone you cared about remembers you well. " << endl;
        cout << "4. Go on a violent rampage." << endl;

        cin >> choice;
        if(choice == 1)
        {
            points.GoodIncrement(1);
        }
        else if (choice == 2)
        {
            points.EvilIncrement(1);
            points.LifeIncrement(1);
        }
        else if (choice == 3)
        {
            points.GoodIncrement(1);
            points.LifeIncrement(1);
        }
        else if (choice == 4)
        {
            points.DeathIncrement(1);
            points.EvilIncrement(2);
        }
    }
       else if (ID == 3)
        {
            std::cout << "You are going for that job interview you've always wanted." << std::endl;
            std::cout << "This is your chance to impress your employer and take a great" << std::endl;
            std::cout << "opportunity. You: " << std::endl;
            std::cout << "1. Go through the job interview normally." << std::endl;
            std::cout << "2. Act extremely stuck-up, hoping your aristocratic act gets you anywhere." << std::endl;
            std::cout << "3. Got the rope and duct tape ready." << std::endl;

            cin >> choice;

            if(choice == 1)
            {
                points.GoodIncrement(2);
            }
            else if (choice == 2)
            {
                points.displayEvil(2);
            }
            else if (choice == 3)
            {
                points.displayDeath(1);
                points.displayEvil(2);
            }
        }
        else if (ID == 5)
        {

        }



    return points;
}
