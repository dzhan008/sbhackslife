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
    int ID = rand() % 5 + 1;
    curr_point = PuzzleDisplay(ID, curr_point);
    return curr_point;
}

Point Card::Crisis(Point curr_point)
{
    int ID = rand() % 5 + 1;
    curr_point = CrisisDisplay(ID, curr_point);
    return curr_point;
}

Point Card::Life(Point curr_point)
{
    int ID = rand() % 5 + 1;
    curr_point = LifeDisplay(ID, curr_point);
    return curr_point;
}

Point Card::PuzzleDisplay(int ID, Point curr_points)
{
    int choice;
    Point points = curr_points;
    if(ID == 1)
    {
        std::cout << "You've entered the world as a newborn baby, just old enough to talk." << std::endl;
        std::cout << "Your mother leans over you, trying to get you to say \"Mama\". You say " << std::endl;
        std::cout << "1. Poop!" << std::endl;
        std::cout << "2. Mama!" << std::endl;
        std::cout << "3. Dada!" << std::endl;
        std::cout << "4. You begin crying." << std::endl;

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
    if (ID == 4)
    {
        std::cout << "You see a burglar steal a purse from an old lady. What do you do?" << std::endl;
        std::cout << "1. \"Stop!\" you yelled, slowly running towards the sprinting robber." << std::endl;
        std::cout << "2. Flee. He may come for you next." << std::endl;

        cin >> choice;
        if(choice == 1)
        {
            points.LifeIncrement(1);
        }
        else if(choice == 2)
        {
            points.EvilIncrement(1);
        }

    }
    if (ID == 5)
    {
        std::cout << "This is the final standoff with your rival. Only one will leave this alive.\n";
        //std::cout << "\n";
        std::cout << "1: Only thing left to do is win.\n";
        std::cout << "2: Murder him, defile his corpse and return it to his family.\n";
        std::cout << "3: Convince him to stop.\n";
        std::cout << "4: Draw.\n";
        cin >> choice;
        if(choice == 1)
        {
            points.GoodIncrement(1);
        }
        else if(choice == 2)
        {
            points.EvilIncrement(3);
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
        std::cout << "It's your first day of school and you've met a really nice girl-your first friend!" << endl;
        std::cout << "You're want to play with her! What to do though?" << endl;
        std::cout << "1. Play in the mud with the bugs! Girls never do that, maybe she'll like it!" << endl;
        std::cout << "2. Spend the recess doing stuff she likes!" << std::endl;
        std::cout << "3. Prank her! Spit gum in her hair while she's not looking. That'll crack everyone up." << std::endl;
        std::cout<< "4. Do nothing. Who needs friends when you've got imaginary ones?" << std::endl;

        cin >> choice;
        if(choice == 1)
        {
            points.LifeIncrement(1);
        }
        else if (choice == 2)
        {
            points.GoodIncrement(1);
            points.LifeIncrement(1);
        }

        else if (choice == 3)
        {
            points.EvilIncrement(1);
        }
        else if (choice == 4)
        {
            points.LifeIncrement(0);
        }
    }
    else if(ID == 2)
    {
        std::cout << "You've entered the teenage years and with that the first instances of peer pressure." << std::endl;
        std::cout << "A cool guy you've known for a bit offers to share a drink with you." << std::endl;
        std::cout << "You: " << std::endl;
        std::cout << "1. Politely decline. It's his choice to do what he wants, but it's yours too." << std::endl;
        std::cout << "2. Accept. You've never tried it before. Not much harm in a bit right?" << std::endl;
        std::cout << "3. Pull out your own bottle! You've been sneaking alcohol since you were 12." << std::endl;

        cin >> choice;
        if(choice == 1)
        {
            points.GoodIncrement(1);
        }
        else if (choice == 2)
        {
            points.LifeIncrement(1);
        }
        else if (choice == 3)
        {
            points.DeathIncrement(1);
        }
    }
    else if(ID == 3)
    {
        std::cout << "Your child has been borne! As you hold the screeching," << std::endl;
        std::cout << "plum-like little boy in your arms, he vomits on your face." << std::endl;
        std::cout << "You: " << std::endl;
        std::cout << "1. Wipe off the barf and cuddle him. He's your son after all!" << std::endl;
        std::cout << "2. Plop him into the mother's arms. It's her turn to hold him anyway." << std::endl;
        std::cout << "3. Roar in disgust and proceed to put child up for adoption." << std::endl;
        std::cout << "4. You knew you wanted a girl. This is why." << std::endl;

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
    else if(ID == 4)
    {
        std::cout << "You're getting your gray hairs now and it's time to retire." << std::endl;
        std::cout << "You've worked at an office job and have made some good friends." << std::endl;
        std::cout << "How do you want to leave your workplace?" << std::endl;
        std::cout << "1. Enjoy the mediocre retirement party thrown by the boss and friends." << std::endl;
        std::cout << "2. Go out with a bang-cursing your boss's hide and trashing the office." << std::endl;
        std::cout << "3. Make sure everyone you cared about remembers you well. " << std::endl;
        std::cout << "4. Go on a violent rampage." << std::endl;

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
    else if(ID == 5)
    {
        std::cout << "Your final days are approaching, but so are some of the best days of your life." << std::endl;
        std::cout << "There's a few things you've got left to do on your bucket list. " << std::endl;
        std::cout << "How do you want to leave this world?" << std::endl;
        std::cout << "1. Peacefully, spending time with loved ones." << std::endl;
        std::cout << "2. Para sailing, bungee-jumping, and cross-country mountain skiing!" << std::endl;
        std::cout << "3. Isolate yourself. The world hasn't treated you well anyway." << std::endl;
        std::cout << "4. Go on a violent rampage." << std::endl;

        cin >> choice;
        if(choice == 1)
        {
            points.GoodIncrement(1);
            points.LifeIncrement(1);
        }
        else if (choice == 2)
        {
            points.DeathIncrement(3);
            points.LifeIncrement(1);
        }
        else if (choice == 3)
        {
            points.DeathIncrement(1);
        }
        else if (choice == 4)
        {
            points.DeathIncrement(5);
            points.EvilIncrement(1);
        }
    }

    return points;
}
