#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

Card::Card()
{

}


int Card::drawCard()
{
    time(0);

    return 3 % rand() + 1;

}

void Card::Puzzle()
{

}

void Card::Crisis()
{

}

void Card::Life()
{

}
