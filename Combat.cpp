#include "Textbasedgame.hpp"

Combat::Combat(){}

/*
if user chose to battle
this calls for the change in character hp
*/
void Combat::startPlayerCombat(Character &a, Enemy &b){

    //Take total mob hp
    //Remove hp depending on player attack
    //Take total player attack
    //remove hp depedning on mob attack
    //return hp value of player and mob
    a.setPlayerHP(a.playergetHP() - b.EnemygetAtk());

}

/*
If user chose to battle
This calls for the the change Enemy hp
if enemy dies, provides exp to user
*/
void Combat::startEnemyCombat(Enemy &a, Character &b){

    //Take total mob hp
    //Remove hp depending on player attack
    //Take total player attack
    //remove hp depedning on mob attack
    //return hp value of player and mob
    a.setEnemyHP(a.EnemygetHP() - b.playergetAtk());
    srand(time(NULL));
    if (a.EnemygetHP() <= 0) {
        a.setEnemyHP(0);
        b.playeraddExperience(rand() % 10 + 5);
    }

}

/*
Condition for battle ending if player hp
or enemy hp is equal or below zero
*/
string Combat::endBattle(Character &a, Enemy &b){
    string BattleEnded;
    if(a.playergetHP() <= 0 || b.EnemygetHP() <= 0){
        BattleEnded = "yes";
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
    /*
    Placed into a while loop to make sure that
    user input is in range of accepted choices
    */
    while(BattleAgain != "1" && BattleAgain != "2"){
        cout << "Would you like to battle? " << endl;
        cout << "[1]Yes [2] No"  << endl;
        cin >> BattleAgain;
        BattleEnded = "2";
        /*
        BattleEnded is set to 2 because if choice 1 is chosen
        then the HP is calcuated
        and choice 2 is chosen no more battles
        */
        while(BattleAgain == "1"){
            /*
            If user chose to battle, Hp would be displayed here
            of both the character
            and the enemy
            */
            while(BattleEnded == "2"){
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
                cout << "Would you like to battle? " << endl;
                cout << "[1]Yes [2] No"  << endl;
                cin >> BattleAgain;
                /*
                while loop to ask question again
                if user input is out of range
                Needed to place after the quesiton to ensure that battleagain can be called
                or else there will be infinite loop
                */
                while(BattleAgain != "1" && BattleAgain != "2"){
                    cout << "Would you like to battle? " << endl;
                    cout << "[1]Yes [2] No"  << endl;
                    cin >> BattleAgain;
                }
                BattleEnded = "2";
            }
            else if(a.playergetHP() <= 0){
                BattleAgain = "2";
            }
        }
    }
}
    

