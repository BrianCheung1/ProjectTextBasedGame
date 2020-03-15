#include "Textbasedgame.hpp"

Places::Places(){}

/*
provides different choices for user 
Each one represents an action that user can do
*/
string Places::nextPlace() {
    string placeNumber;
    while(placeNumber != "1" && placeNumber != "2" && placeNumber != "3" && placeNumber != "4" && placeNumber != "5"){
        cout << "Where would you like to go?" <<endl;
        cout << "[1]Town [2]Adventure [3]Check Stats [4]Boss Battle [5]Exit Game"  << endl;
        cin >> placeNumber;
    }
    return placeNumber;
}

/*
Provide options of town that user can choose from
Each one will provide user with helpful benefits
*/
string Places::town(){
    string townNumber;
    while(townNumber != "1" && townNumber != "2" && townNumber != "3" && townNumber != "4" && townNumber != "5"){
        cout << "What would you like to do?" << endl;
        cout << "[1]Shop [2]Stats [3]Upgrades [4]Rest [5]Exit Town" << endl;
        cin >> townNumber;
    }
    return townNumber;
}

void Places::bossCave(Combat &c, Character &a, Enemy &b){
    b.bossStats();
    string attack;
    string BossBattleChoice;

    cout << "Boss Name: " << b.getEnemyname() << endl;
    cout << "HP: " << b.EnemygetHP() << endl;
    cout << "ATK: " << b.EnemygetAtk() << endl;
    cout << "DEF: " << b.EnemygetDef() << endl;
    cout << "Would You Like To Battle?" << endl;
    cout << "[1]Basic Attack [2]Special Attack [3]Run Away" << endl;
    cin >> BossBattleChoice;
    attack = BossBattleChoice;

    while(BossBattleChoice == "1" || BossBattleChoice == "2"){
        c.startPlayerCombat(a, b);
        c.startEnemyCombat(b, a, attack);
        if(a.playergetHP() > 0){
        cout << "Would You Like To Battle? Testing" << endl;
        cout << "[1]Basic Attack [2]Special Attack [3]Run Away" << endl;
        cin >> BossBattleChoice;
        attack = BossBattleChoice;
        }
        else if(a.playergetHP() <= 0){
            BossBattleChoice = "3";
        }
    }
}