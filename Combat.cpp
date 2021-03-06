#include "Textbasedgame.hpp"

Combat::Combat() {}

/*
if user chose to battle
this calls for the change in character hp
*/
void Combat::startPlayerCombat(Character& a, Enemy& b) {

    //Take total mob hp
    //Remove hp depending on player attack
    //Take total player attack
    //remove hp depending on mob attack
    //return hp value of player and mob
    srand(time(NULL));
    int randomPlayerDef = (rand() % int(a.getPlayerDef()/2)) + 1; //gives a random def number
    int dmg = b.getEnemyAtk() - randomPlayerDef;                  //the dmg from enemys attack - the random player def
    if(dmg <= 0){                                                 //This way enemys dont heal us if they do negative dmg
        dmg = 0;
    }
    a.setPlayerHP(a.getPlayerHP() - dmg);
    cout << "Enemy dealt " << dmg << " damage" << endl;
    cout << "Your HP: " << a.getPlayerHP() << endl;


}

/*
If user chose to battle
This calls for the the change Enemy hp
if enemy dies, provides exp to user
*/
void Combat::startEnemyCombat(Enemy& a, Character& b, string attack) {

    /*
    attack 1 is basic attacks
    takes no mana
    */
    if(attack == "1"){
        srand(time(NULL));
        int enemyRandomDef = (rand() % int(a.getEnemyDef())) + 1;       //gives a random def of the enemy
        int dmg = b.getPlayerAtk() - enemyRandomDef;                    //the dmg from players attack - enemys random def
        if(dmg <= 0){                                                   //this way if we do negative dmg we dont heal the enemy
            dmg = 0;        
        }
        a.setEnemyHP(a.getEnemyHP() - dmg);
        cout << "Your MP: " << b.getPlayerMana() << endl;
        cout << "You've dealt " << dmg << " damage" << endl;
        if (a.getEnemyHP() <= 0) {
            a.setEnemyHP(0);
            b.addPlayerExp(b.getPlayerExp() + a.getEnemyGold());
            cout << "Enemy HP: " << a.getEnemyHP() << endl;
            cout << "You've gained " << a.getEnemyExp() << " Exp" << endl;
            b.setPlayerGold(b.getPlayerGold() + a.getEnemyGold());
            cout << "You've gained " << a.getEnemyGold() << " Gold" << endl;
        }
        else if(a.getEnemyHP() > 0){
            cout << "Enemy HP: " << a.getEnemyHP() << endl;
        }
    }
    /*
    attack is special attack
    takes mana to use
    deals a constant dmg rather than random
    */
    else if(attack == "2"){
        if(b.getPlayerMana() >= b.getPlayerSkillManaCost()){
            b.setPlayerMana(b.getPlayerMana() - b.getPlayerSkillManaCost());
            cout << "Your MP: " << b.getPlayerMana() << endl;
            cout << "You used " << b.getPlayerSkill() << " and dealt " << b.getPlayerSkillDmg() << " damage" << endl;
            a.setEnemyHP(a.getEnemyHP() - b.getPlayerSkillDmg());
            srand(time(NULL));
            if (a.getEnemyHP() <= 0) {
                a.setEnemyHP(0);
                b.addPlayerExp(b.getPlayerExp() + a.getEnemyGold());
                cout << "Enemy HP: " << a.getEnemyHP() << endl;
                cout << "You've gained " << a.getEnemyExp() << " Exp" << endl;
                b.setPlayerGold(b.getPlayerGold() + a.getEnemyGold());
                cout << "You've gained " << a.getEnemyGold() << " Gold" << endl;
            }
            else if(a.getEnemyHP() > 0){
                cout << "Enemy HP: " << a.getEnemyHP() << endl;
            }
        }
        /*
        in case user does not have enough mana
        they will use basic attack instead
        */
        else if(b.getPlayerMana() < b.getPlayerSkillManaCost()){
            cout << "You don't have enough mana. Using Basic attack Instead" << endl;
            srand(time(NULL));
            int enemyRandomDef = (rand() % int(a.getEnemyDef()*2)) + 1;       //gives a random def of the enemy
            int dmg = b.getPlayerAtk() - enemyRandomDef;                    //the dmg from players attack - enemys random def
            if(dmg <= 0){                                                   //this way if we do negative dmg we dont heal the enemy
                dmg = 0;        
            }
            a.setEnemyHP(a.getEnemyHP() - dmg);
            srand(time(NULL));
            cout << "Your MP: " << b.getPlayerMana() << endl;
            cout << "You've dealt " << dmg << " damage" << endl;
            if (a.getEnemyHP() <= 0) {
                a.setEnemyHP(0);
                b.addPlayerExp(b.getPlayerExp() + a.getEnemyGold());
                cout << "Enemy HP: " << a.getEnemyHP() << endl;
                cout << "You've gained " << a.getEnemyExp() << " Exp" << endl;
                b.setPlayerGold(b.getPlayerGold() + a.getEnemyGold());
                cout << "You've gained " << a.getEnemyGold() << " Gold" << endl;
            }
            else if(a.getEnemyHP() > 0){
                cout << "Enemy HP: " << a.getEnemyHP() << endl;
            }
        }
    }
}

/*
Condition for battle ending if player hp
or enemy hp is equal or below zero
Added to function that would allow user to choose to run away
if they didn't want to fight anymore
*/
string Combat::endBattle(Character& a, Enemy& b) {
    string BattleEnded;
    if (a.getPlayerHP() <= 0 || b.getEnemyHP() <= 0) {
        BattleEnded = "3";
    }
    else {
        /*
        in the case that enemy has not lost all their hp
        user is able to fight or run away
        1- Fight
        2- Run away
        */
        cout << "Would you like to battle again?" << endl;
        cout << "[1]Basic Attack [2]Special Attack [3]Run Away" << endl;
        cin >> BattleEnded;
        if (BattleEnded == "1") {
            BattleEnded = "1";
        }
        else if(BattleEnded == "2"){
            BattleEnded = "2";
        }
        else if (BattleEnded == "3") {
            BattleEnded = "3";
        }

    }
    return BattleEnded;
}

/*
The actual fighting process of Character and enemy
Creates a mob for user to see
Asks if they want to fight
Displays stats of mob
Dispaly Hp of player and mob
*/
void Combat::ActualCombat(Combat& c, Character& a, Enemy& b) {
    string BattleAgain;
    string BattleEnded;
    string attack;
    /*
    This summons the first monster for player to fight
    provides player the stats of the mob
    */
    cout << "New Enemy: " << b.genRandomMob() << " entered the battle" << endl;
    b.Enemystats();
    b.harderEnemy(a);
    cout << "HP:  " << b.getEnemyHP() << endl;
    cout << "ATK: " << b.getEnemyAtk() << endl;
    cout << "DEF: " << b.getEnemyDef() << endl;
    /*
    This first while loop is to make sure that the user provides the correct 
    input of 1/2/3
    if not it will loop until correct choice is provided
    */
    while(BattleAgain != "1" && BattleAgain != "2" && BattleAgain != "3"){
        cout << "Would you like to battle? " << endl;
        cout << "[1]Basic Attack [2]Special Attack [3]Run Away" << endl;
        cin >> BattleAgain;
        attack = BattleAgain;
        /*
        this takes the users input of what they want to do
        if its either attack the while loop will occur
        if its choice 3, battles will end
        */
        while(BattleAgain == "1" || BattleAgain == "2"){
            cout << "====================" << endl;
            cout << "Battling..." << endl;
            c.startPlayerCombat(a, b);
            c.startEnemyCombat(b, a, attack);
            cout << "====================" << endl;
            BattleAgain = c.endBattle(a, b);  
            attack = BattleAgain;   //this is to provide the users choice of basic or special atk
            if(b.getEnemyHP() <= 0){
                cout << "[1]Continue Battling [2]Leave" << endl;
                string continueBattle;
                cin >> continueBattle;
                //Provides choice to battle or go to town
                if(continueBattle == "1"){
                /*
                after the battle if the player still has hp
                and the enemy is killed
                player is provided with a choice to fight a new mob
                */
                    if (a.getPlayerHP() > 0 && b.getEnemyHP() <= 0) {
                        cout << "New Enemy: " << b.genRandomMob() << " entered the battle" << endl;
                        b.Enemystats();
                        b.harderEnemy(a);
                        cout << "HP:  " << b.getEnemyHP() << endl;
                        cout << "ATK: " << b.getEnemyAtk() << endl;
                        cout << "DEF: " << b.getEnemyDef() << endl;
                        cout << "Would you like to battle again? " << endl;
                        cout << "[1]Basic Attack [2]Special Attack [3]Run Away" << endl;
                        cin >> BattleAgain;
                        attack = BattleAgain;
                    }
                }
            }
        }
        /*
        if the user doesn't have enough hp then battles will end
        */
        if (a.getPlayerHP() <= 0) {
            BattleAgain = "3";
        }
        /*
        if the user chose to run away and the enemy still has hp
        combat function stops
        */
        else if (BattleEnded == "3" && b.getEnemyHP() > 0) {
            BattleAgain = "3";
        }
    }
}





