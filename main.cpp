#include <iostream>
#include "Point.h"
#include "Card.h"
#include <time.h>
#include <ctime>
#include <cstdlib>

void menu();
void initalizegame();

int main()
{
    std::cout << "Welcome to Judgement Day." << std::endl;
    std::cout << "SBHacks Version 1.0." << std::endl << std::endl;

    menu();

    /*p_points = player.LifeDisplay(1, p_points);

    std::cout << p_points.displayDeath() << std::endl;
    std::cout << p_points.displayEvil() << std::endl;
    std::cout << p_points.displayGood() << std::endl;
    std::cout << p_points.displayLife() << std::endl;

    p_points = player.LifeDisplay(1, p_points);

*/
    return 0;
}

void menu()
{
    int choice;
    srand(time(0));

    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1. Play" << std::endl;
    std::cout << "2. Instructions" <<std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cin >> choice;
    if(choice == 1)
    {
        initalizegame();
    }
    else if (choice == 2)
    {
        std::cout << "Today was the day of your death. The story I tell today is not of how you died," << std::endl;
        std::cout << "or how you lived, day in and day out. I do not need to know that. I know" << std::endl;
        std::cout << "everything. I am everything. You alone know what you did, how you lived your" << std::endl;
        std::cout << "life...the decisions you were faced with and mistakes you made. If I were to" << std::endl;
        std::cout << "make a judgement, and I do often, it would not be good for you. But I see" << std::endl;
        std::cout << "something in you too. You know what you did wrong, what you did right. And" << std::endl;
        std::cout << "I've decided to give you a chance to change it. I'm going to let you go," << std::endl;
        std::cout << "you may feel like you're falling. Try and make the right decisions this time," << std::endl;
        std::cout << "and when you're done we'll how and where you really fall in this afterlife." << std::endl << std::endl;


        menu();
    }
    else if (choice == 3)
    {
        std::cout << "Thank you for playing!" << std::endl;
        return;
    }
}

void initalizegame()
{
    int card;
    int MAX_COUNTER = 25;

    Card player;
    Point p_points;


    while(!p_points.Dead()&& !p_points.Alive())
    {
        card = player.drawCard();

        if(card == 1)
        {
            p_points = player.Puzzle(p_points);
        }
        else if(card == 2)
        {
            p_points = player.Crisis(p_points);
        }
        else if(card == 3)
        {

            p_points = player.Life(p_points);
        }

        int i = p_points.getCounter();

        if(i == MAX_COUNTER)
        {
            std::cout << std::endl << "Game Over! Here is your final score: " << std::endl;
            std::cout << p_points.displayDeath() << std::endl;
            std::cout << p_points.displayEvil() << std::endl;
            std::cout << p_points.displayGood() << std::endl;
            std::cout << p_points.displayLife() << std::endl;
            p_points.Ending();
            system("PAUSE");
            return;
        }


            p_points = player.Life(p_points);
    }

    std::cout << std::endl << "Game Over! Here is your final score: " << std::endl;
    std::cout << p_points.displayDeath() << std::endl;
    std::cout << p_points.displayEvil() << std::endl;
    std::cout << p_points.displayGood() << std::endl;
    std::cout << p_points.displayLife() << std::endl << std::endl;

    p_points.Ending();
    system("PAUSE");
    return;
}


     /*
    ENDING:(occurs if life/death >= 5)
        if(good > 3 && life >= 5):  You didn't play this game correctly though. Play again and be more fun.
        if(good < 1 && evil < 1 && death >=5):
        if(evil > 3 && life >= 5):
        if(evil > 3 && death >=5): It's a good thing you died, you terrible terrible person. */




