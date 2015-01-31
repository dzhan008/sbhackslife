#include <iostream>
#include "Point.h"
#include "Card.h"

using namespace std;

int main()
{
    Card player;
    Point p_points;

    p_points = player.LifeDisplay(1);

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
