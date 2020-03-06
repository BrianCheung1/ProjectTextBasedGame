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

string Combat::endBattle(Character &a, Enemy &b){
    string BattleEnded;
    if(a.playergetHP() <= 0 || b.EnemygetHP() <= 0){
        BattleEnded = "yes";
    }
    return BattleEnded;
}

void Combat::ActualCombat(Combat &c,Character &a, Enemy &b){
    string BattleAgain;
    string BattleEnded;
    /*
    Creates a random mob
    Shows the stats for user to see
    */
    cout << "New Enemy: " << b.genRandomMob() << " entered the battle" << endl;
    b.Enemystats();
    cout << "HP:  " << b.EnemygetHP() << endl;
    cout << "ATK: " << b.EnemygetAtk() << endl;
    cout << "DEF: " << b.EnemygetDef() << endl;
    cout << "Would you like to battle again? " << endl;
    cin >> BattleAgain;
    BattleEnded = "no";

    /*
    begins a battle with the mob that was generated
    Provides hp remaining for player and mob
    Allows user to choose if they want to battle again or not
    */
    while(BattleAgain != "no"){
        while(BattleEnded != "yes"){
        cout << "==================" << endl;
        cout << "Battling..." << endl;
        c.startPlayerCombat(a, b);
        cout << "Your HP: "<< a.playergetHP() << endl;
        c.startEnemyCombat(b, a);
        cout << "Enemy HP: "<< b.EnemygetHP() << endl;
        cout << "==================" << endl;
        BattleEnded = c.endBattle(a,b);
        }
        
        if(a.playergetHP() > 0){
            cout << "New Enemy: " << b.genRandomMob() << " entered the battle" << endl;
            b.Enemystats();
            cout << "HP:  " << b.EnemygetHP() << endl;
            cout << "ATK: " << b.EnemygetAtk() << endl;
            cout << "DEF: " << b.EnemygetDef() << endl;
            cout << "Would you like to battle again? " << endl;
            cin >> BattleAgain;
            BattleEnded = "no";
        }
        else if(a.playergetHP() <= 0){
            BattleAgain = "no";
        }
    }
}
