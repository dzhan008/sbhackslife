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


    std::cout << "Welcome to Life: The Simplified Version!" << std::endl;

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
        std::cout << "Today was the day of your death. The story I tell today is not of how you died, or how you lived," << std::endl;
        std::cout << "day in and day out. I do not need to know that. I know everything. I am everything." << std::endl;
        std::cout << "You alone know what you did, how you lived your life...the decisions you were faced with" << std::endl;
        std::cout << "and mistakes you made. If I were to make a judgement, and I do often, it would not be good for you." << std::endl;
        std::cout << "But I see something in you too. You know what you did wrong, what you did right. And I've" << std::endl;
        std::cout << "decided to give you a chance to change it. I'm going to let you go, you might feel like you're" << std::endl << std::endl;
        std::cout << "falling. Try and make the right decisions this time, and when you're done we'll see how" << std::endl;
        std::cout << "and where you really fall in this afterlife." << std::endl;

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

    Card player;
    Point p_points;


    while(!p_points.Dead()&& !p_points.Alive())
    {
        std::cout << "Drawing card..." << std::endl;
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
<<<<<<< HEAD
            p_points = player.Life(p_points);
        }
        int i = p_points.getCounter();
        std::cout << i << std::endl;
        if(i == 15)
        {
            std::cout << std::endl << "Game Over! Here is your final score: " << std::endl;
            std::cout << p_points.displayDeath() << std::endl;
            std::cout << p_points.displayEvil() << std::endl;
            std::cout << p_points.displayGood() << std::endl;
            std::cout << p_points.displayLife() << std::endl;
            p_points.Ending();
            return;
        }
=======

            p_points = player.Life(p_points);
        }
>>>>>>> origin/master
    }
    std::cout << std::endl << "Game Over! Here is your final score: " << std::endl;
    std::cout << p_points.displayDeath() << std::endl;
    std::cout << p_points.displayEvil() << std::endl;
    std::cout << p_points.displayGood() << std::endl;
    std::cout << p_points.displayLife() << std::endl;

    p_points.Ending();

     /*
    ENDING:(occurs if life/death >= 5)
        if(good > 3 && life >= 5):  You didn't play this game correctly though. Play again and be more fun.
        if(good < 1 && evil < 1 && death >=5):
        if(evil > 3 && life >= 5):
        if(evil > 3 && death >=5): It's a good thing you died, you terrible terrible person. */

}
