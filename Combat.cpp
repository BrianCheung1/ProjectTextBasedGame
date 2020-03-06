#include "Textbasedgame.hpp"

Combat::Combat(){}

void Combat::startPlayerCombat(Character &a, Enemy &b){

    //Take total mob hp
    //Remove hp depending on player attack
    //Take total player attack
    //remove hp depedning on mob attack
    //return hp value of player and mob
    a.setPlayerHP(a.playergetHP() - b.EnemygetAtk());

}

void Combat::startEnemyCombat(Enemy &a, Character &b){

    //Take total mob hp
    //Remove hp depending on player attack
    //Take total player attack
    //remove hp depedning on mob attack
    //return hp value of player and mob
    a.setEnemyHP(a.EnemygetHP() - b.playergetAtk());

    if (a.EnemygetHP() <= 0) {
        a.setEnemyHP(0);
    }

}

