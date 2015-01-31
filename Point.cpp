#include "Point.h"
#include <iostream>

Point::Point()
{
    life = 0;
    death = 0;
    good = 0;
    evil = 0;
}
void Point::LifeIncrement(int inc)
{
    life+=inc;
    if(inc < 0)
    {
        std::cout << "You lost " << inc << ' ' << " life." << std::endl;
    }
    else
    {
        std::cout << "You gained " << inc << ' ' << " life." << std::endl;
    }
}
void Point::DeathIncrement(int inc)
{
    death+=inc;
    if(inc < 0)
    {
        std::cout << "You lost " << inc << ' ' << " death." << std::endl;
    }
    else
    {
        std::cout << "You gained " << inc << ' ' << " death." << std::endl;
    }
}
void Point::GoodIncrement(int inc)
{
    good+=inc;
    if(inc < 0)
    {
        std::cout << "You lost " << inc << ' ' << " good." << std::endl;
    }
    else
    {
        std::cout << "You gained " << inc << ' ' << " good" << std::endl;
    }
}
void Point::EvilIncrement(int inc)
{
    evil+=inc;
    if(inc < 0)
    {
        std::cout << "You lost " << inc << ' ' << " evil." << std::endl;
    }
    else
    {
        std::cout << "You gained " << inc << ' ' << " evil." << std::endl;
    }
}
int Point::displayLife() const
{
    return life;
}
int Point::displayDeath() const
{
    return death;
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
