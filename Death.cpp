#include "Textbasedgame.hpp"

Death::Death(){}

void Death::respawn(Character &a) {
    cout << "You have died. You will respawn now" << endl;
    srand(time(NULL));
    a.playeraddExperience(rand() % 50 + 1 -50);
    a.setPlayerHP(rand() % 50 + 1);
    a.playerStats();
}