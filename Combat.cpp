#include "Textbasedgame.hpp"

Combat::Combat(){}

void Combat::startCombat(){

    //Take total mob hp
    //Remove hp depending on player attack
    //Take total player attack
    //remove hp depedning on mob attack
    //return hp value of player and mob
    setHP(playergetHP() - EnemygetAtk());
}