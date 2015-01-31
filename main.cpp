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



    //Card events. Add to class later
    /*Event: Your child has been borne! As you hold the screeching,
    plum-like little boy in your arms, he vomits on your face.
        Choices: Wipe off the barf and cuddle him. He's your son after all! (+ Life +Good)
                Plop him into the mother's arms. It's her turn to hold him anyway (+Evil)
                Roar in disgust and proceed to drop-kick out of window(+Death, +2 Evil)
                You knew you wanted a girl. This is why. (+Good)
    Crisis: As you come home you notice your house is in flames. What do you do? Answer quickly!
        Choices: Save your family trapped inside!! (+Death, +2 Good)
                Run away from your family trapped inside!! (+Life, + Evil)
                Run around laughing because your house and health is insured. (+Good +Life)
                Run into flames in a wild panic (+5 Death)
    Puzzle: You're in your first relationship! But your'e partner is mad at you and won't say why...
    What to do?
        Choices: Ask what's wrong. (+Death)
                Ignore it, they'll tell you eventually right? (+Death)
    ENDING:(occurs if life/death >= 5)
        if(good > 3 && life >= 5): You had a great life, so long and fulfilled. You made all the right
            choices! You didn't play this game correctly though. Play again and be more fun.
        if(good < 1 && evil < 1 && death >=5): That was odd. You died quite quickly and didn't do much
            in your life.
        if(evil > 3 && life >= 5): Why are you alive? You've cheated the death you deserve and are
                probably cheating others into the death they didn't deserve.
        if(evil > 3 && death >=5): It's a good thing you died, you terrible terrible person. */
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
        std::cout << "Welcome to the game of life! Here you will make intricate and nerve-raking decisions" << std::endl;
        std::cout << "that will decide how your path of life will go! How does this work you say? Well, you" << std::endl;
        std::cout << "will draw cards that will be based on a specific event. There are three types of events:" << std::endl;
        std::cout << "Puzzles - Life can be confusing, and you will be faced with solving problems to progress." << std::endl;
        std::cout << "Crisis - In times there are disasters or unforeseen events that need to be tend to ASAP." << std::endl;
        std::cout << "Life Decision - This is self-explanatory, but we hope you have a good heart." << std::endl << std::endl;
        std::cout << "Along with events comes with types of points you get with each decision you make." << std::endl;
        std::cout << "Don't make too many bad decisions, or it's game over!" << std::endl;

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


    while(!p_points.Dead()|| p_points.Alive())
    {
        cout << "Drawing card..." << endl;
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
        std::cout << p_points.displayDeath() << std::endl;
        std::cout << p_points.displayEvil() << std::endl;
        std::cout << p_points.displayGood() << std::endl;
        std::cout << p_points.displayLife() << std::endl;

    }
}
