#include "Textbasedgame.hpp"

int main(){
    cout << "What is your name?" << endl;
    string name;
    cin >> name;

    Character player;
    player.setName(name);
    
    /*
    Provide 3 different classes for user to choose fomr
    Each come with different stats
    */
    cout << "What class would you like to play?" << endl;
    cout << "[1]Warrior" << endl;
    cout << "[2]Mage" << endl;
    cout << "[3]Archer" << endl;
    int choice;
    cin >> choice;

    /*
    Changes user to their chosen class
    Provides user with useful stats
    */
    player.setClass(choice);
    cout << "==================" << endl;
    cout << "Player Name: " << player.getname() << endl;
    cout << "Player Class: " << player.getclassname() << endl;
    cout << "Lvl: " << player.playergetLevel() << endl;
    cout << "HP:  " << player.playergetHP() << endl;
    cout << "ATK: " << player.playergetAtk() << endl;
    cout << "DEF: " << player.playergetDef() << endl;
    cout << "==================" << endl;

    /*
    Creates a random mob
    Shows the stats for user to see
    */
    Enemy mob;
    cout << mob.genRandomMob() << endl;
    mob.Enemystats();
    cout << "HP:  " << mob.EnemygetHP() << endl;
    cout << "ATK: " << mob.EnemygetAtk() << endl;
    cout << "DEF: " << mob.EnemygetDef() << endl;

    /*
    begins a battle with the mob that was generated
    Provides hp remaining for player and mob
    Allows user to choose if they want to battle again or not
    */
    string BattleAgain;
    while(BattleAgain != "no"){
        Combat startBattle;
        cout << "==================" << endl;
        cout << "Battling..." << endl;
        startBattle.startPlayerCombat(player, mob);
        cout << "Your HP: "<< player.playergetHP() << endl;
        startBattle.startEnemyCombat(mob, player);
        cout << "Enemy HP: "<< mob.EnemygetHP() << endl;
        cout << "==================" << endl;
        
        cout << mob.genRandomMob() << endl;
        mob.Enemystats();
        cout << "HP:  " << mob.EnemygetHP() << endl;
        cout << "ATK: " << mob.EnemygetAtk() << endl;
        cout << "DEF: " << mob.EnemygetDef() << endl;
        
        if(player.playergetHP() > 0){
            cout << "Would you like to battle again? " << endl;
            cin >> BattleAgain;
        }
        else if(player.playergetHP() <= 0){
            BattleAgain = "no";
        }
    }
    
}   