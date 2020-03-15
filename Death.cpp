#include "Textbasedgame.hpp"

Death::Death(){}

/*
if a player dies during combat
they will respawn in town
with random loss of exp/gold/hp
*/
void Death::respawn(Character &a) {
    cout << "You have died. You will respawn now" << endl;
    srand(time(NULL));

    int expLost = (rand() % 25 + 1) - 25;
    a.addPlayerExp(a.getPlayerExp() - expLost);
    cout << "You've lost " << abs(expLost) << " Exp" << endl;

    int hpLost = rand() % 25;
    a.setPlayerHP(a.getPlayerDefaultHealth() - hpLost);
    cout << "You've lost " << hpLost << " HP" << endl;

    int goldLost = rand() % 25;
    a.setPlayerGold(-goldLost);
    cout << "You've lost " << goldLost << " Gold" << endl;

    a.playerStats();
}