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
    a.playeraddExperience((rand() % 25 + 1) - 25);
    a.setPlayerHP(rand() % 25);
    a.setPlayerGold(rand() % 25);
    a.playerStats();
}