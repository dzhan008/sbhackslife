#include "Point.h"
#include <iostream>

Point::Point()
{
    life = 0;
    death = 0;
    good = 0;
    evil = 0;
    counter = 0;
}
void Point::LifeIncrement(int inc)
{
    life+=inc;
    if(inc < 0)
    {
        std::cout << std::endl << "You lost " << inc << ' ' << " life." << std::endl;
    }
    else
    {
        std::cout << std::endl << "You gained " << inc << ' ' << " life." << std::endl;
    }
}
void Point::DeathIncrement(int inc)
{
    death+=inc;
    if(inc < 0)
    {
        std::cout << std::endl << "You lost " << inc << ' ' << " death." << std::endl;
    }
    else
    {
        std::cout << std::endl << "You gained " << inc << ' ' << " death." << std::endl;
    }
}
void Point::GoodIncrement(int inc)
{
    good+=inc;
    if(inc < 0)
    {
        std::cout << std::endl << "You lost " << inc << ' ' << " good." << std::endl;
    }
    else
    {
        std::cout << std::endl << "You gained " << inc << ' ' << " good." << std::endl;
    }
}
void Point::EvilIncrement(int inc)
{
    evil+=inc;
    if(inc < 0)
    {
        std::cout << std::endl << "You lost " << inc << ' ' << " evil." << std::endl;
    }
    else
    {
        std::cout << std::endl << "You gained " << inc << ' ' << " evil." << std::endl;
    }
}
int Point::displayLife() const
{
    std::cout << "Life: ";
    return life;
}
int Point::displayDeath() const
{
    std::cout << "Death: ";
    return death;
}
int Point::displayGood() const
{
    std::cout << "Good: ";
    return good;
}
int Point::displayEvil() const
{
    std::cout << "Evil: ";
    return evil;
}
bool Point::Alive()
{
    if(life >= 5)
    {
        return true;
    }
    return false;
}
bool Point::Dead()
{
    if(death >= 5)
    {
        return true;
    }
    return false;
}

void Point::CheckScenario(int counter1)
{
    counter += counter1;
}

int Point::getCounter() const
{
    return counter;
}


int Point::Ending()
{
    if (good > 3 && life >= 5)
    {
        std::cout << "You had a great life, so long and fulfilled. You made all the right choices!" << std::endl;
        std::cout << "You didn't play this game correctly though. Play again and be more fun." << std::endl;
    }
    else if (good < 1 && evil < 1 && death >= 5)
    {
        std::cout << "That was odd. You died quite quickly and didn't do much in your life." << std::endl;
    }
    else if (good < 3 && evil < 3 && death >= 5)
    {
        std::cout << "You're something, aren't you? Despite dying you got a taste of the good and bad." << std::endl;
    }
    else if (evil > 3 && life >= 5)
    {
        std::cout << "Why are you alive? You've cheated the death you deserve and are probably " << std::endl;
        std::cout << "cheating others into the death they didn't deserve." << std::endl;
    }
    else if (evil > 3 && death >= 5)
    {
        std::cout << "It's a good thing you died, you terrible, terrible person." << std::endl;
    }

    return 0;

}
