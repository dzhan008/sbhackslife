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


    std::cout << "Welcome to Play the Choices!" << std::endl;

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
        std::cout << "Welcome to the game of life! Here you will make intricate and nerve-raking " << std::endl;
        std::cout << "decisions that will decide how your path of life will go! How does this work " << std::endl;
        std::cout << "you say? Well, you will draw cards that will be based on a specific " << std::endl;
        std::cout << "event. There are three types of events:" << std::endl << std::endl;
        std::cout << "Puzzles - Life can be confusing, and you will be faced with solving problems to progress." << std::endl << std::endl;
        std::cout << "Crisis - In times there are disasters or unforeseen events that need to be tend to ASAP." << std::endl << std::endl;
        std::cout << "Life Decision - This is self-explanatory, but we hope you have a good heart." << std::endl << std::endl << std::endl;
        std::cout << "Along with events comes with points you get with each decision you make." << std::endl;
        std::cout << "Don't make too many bad decisions, or it's game over!" << std::endl << std::endl;

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

        card = player.drawCard();

        if(card == 1)
        {
            std::cout << "Drawing card..." << std::endl;
            p_points = player.Puzzle(p_points);

        }
        else if(card == 2)
        {
            std::cout << "Drawing card..." << std::endl;
            p_points = player.Crisis(p_points);
        }
        else if(card == 3)
        {
            std::cout << "Drawing card..." << std::endl;
            p_points = player.Life(p_points);
        }
        if(p_points.getCounter() == 3)
        {
            p_points.Ending();
        }
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
