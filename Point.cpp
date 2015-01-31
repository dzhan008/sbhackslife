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
}
void Point::DeathIncrement(int inc)
{
    death+=inc;
}
void Point::GoodIncrement(int inc)
{
    good+=inc;
}
void Point::EvilIncrement(int inc)
{
    evil+=inc;
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
