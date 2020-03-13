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
    //remove hp depedning on mob attack
    //return hp value of player and mob
    srand(time(NULL));
    int randomPlayerDef = (rand() % int(a.playergetDef()/2)) + 1; //gives a random def number
    int dmg = b.EnemygetAtk() - randomPlayerDef;                  //the dmg from enemys attack - the random player def
    if(dmg <= 0){                                                 //This way enemys dont heal us if they do negative dmg
        dmg = 0;
    }
    a.setPlayerHP(a.playergetHP() - dmg);
    cout << "Enemy dealt " << dmg << " damage" << endl;
    cout << "Your HP: " << a.playergetHP() << endl;

}

/*
If user chose to battle
This calls for the the change Enemy hp
if enemy dies, provides exp to user
*/
void Combat::startEnemyCombat(Enemy& a, Character& b, string attack) {

    //Take total mob hp
    //Remove hp depending on player attack
    //Take total player attack
    //remove hp depedning on mob attack
    //return hp value of player and mob
    if(attack == "1"){
        srand(time(NULL));
        int enemyRandomDef = (rand() % int(a.EnemygetDef()*2)) + 1;       //gives a random def of the enemy
        int dmg = b.playergetAtk() - enemyRandomDef;                    //the dmg from players attack - enemys random def
        if(dmg <= 0){                                                   //this way if we do negative dmg we dont heal the enemy
            dmg = 0;        
        }
        a.setEnemyHP(a.EnemygetHP() - dmg);
        cout << "You've dealt " << dmg << " damage" << endl;
        cout << "Enemy HP: " << a.EnemygetHP() << endl;
        srand(time(NULL));
        if (a.EnemygetHP() <= 0) {
            int exp = (rand() % 5) + 1;                                  //random exp if the enemy dies
            int gold = (rand() % 15) + 1;                                //random gold if the enemy dies
            a.setEnemyHP(0);
            b.playeraddExperience(exp);
            cout << "You've gained " << exp << " Exp" << endl;
            b.setPlayerGold(gold);
            cout << "You've gained " << gold << " Gold" << endl;
        }
    }
    else if(attack == "2"){
        cout << "You used " << b.getPlayerSkill() << endl;
        a.setEnemyHP(a.EnemygetHP() - b.getPlayerSkillDmg());
        cout << "You've dealt " << b.getPlayerSkillDmg() << " damage" << endl;
        cout << "Enemy HP: " << a.EnemygetHP() << endl;
        srand(time(NULL));
        if (a.EnemygetHP() <= 0) {
            int exp = (rand() % 5) + 1;                                  //random exp if the enemy dies
            int gold = (rand() % 15) + 1;                                //random gold if the enemy dies
            a.setEnemyHP(0);
            b.playeraddExperience(exp);
            cout << "You've gained " << exp << " Exp" << endl;
            b.setPlayerGold(gold);
            cout << "You've gained " << gold << " Gold" << endl;
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
    if (a.playergetHP() <= 0 || b.EnemygetHP() <= 0) {
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
    cout << "HP:  " << b.EnemygetHP() << endl;
    cout << "ATK: " << b.EnemygetAtk() << endl;
    cout << "DEF: " << b.EnemygetDef() << endl;
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
            /*
            after the battle if the player still has hp
            and the enemy is killed
            player is provided with a choice to fight a new mob
            */
            if (a.playergetHP() > 0 && b.EnemygetHP() <= 0) {
                cout << "New Enemy: " << b.genRandomMob() << " entered the battle" << endl;
                b.Enemystats();
                cout << "HP:  " << b.EnemygetHP() << endl;
                cout << "ATK: " << b.EnemygetAtk() << endl;
                cout << "DEF: " << b.EnemygetDef() << endl;
                cout << "Would you like to battle again? " << endl;
                cout << "[1]Basic Attack [2]Special Attack [3]Run Away" << endl;
                cin >> BattleAgain;
                attack = BattleAgain;
            }
        }
        /*
        if the user doesnt have enough hp then battles will end
        */
        if (a.playergetHP() <= 0) {
            BattleAgain = "3";
        }
        /*
        if the user chose to run away and the enemy still has hp
        combat function stops
        */
        else if (BattleEnded == "3" && b.EnemygetHP() > 0) {
            BattleAgain = "3";
        }
    }
}





