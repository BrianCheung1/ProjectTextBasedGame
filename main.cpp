#include "Textbasedgame.hpp"

int main(){
    cout << "What is your name?" << endl;
    string name;
    cin >> name;

    Character player;
    player.setName(name);
    

    cout << "What class would you like to play?" << endl;
    cout << "[1]Warrior" << endl;
    cout << "[2]Mage" << endl;
    cout << "[3]Archer" << endl;
    int choice;
    cin >> choice;

    player.setClass(choice);
    
    cout << "==================" << endl;
    cout << "Player Name: " << player.getname() << endl;
    cout << "Player Class: " << player.getclassname() << endl;
    cout << "Lvl: " << player.playergetLevel() << endl;
    cout << "HP:  " << player.playergetHP() << endl;
    cout << "ATK: " << player.playergetAtk() << endl;
    cout << "DEF: " << player.playergetDef() << endl;
    cout << "==================" << endl;

    Enemy mob;
    cout << mob.genRandomMob() << endl;
    mob.Enemystats();
    cout << "HP:  " << mob.EnemygetHP() << endl;
    cout << "ATK: " << mob.EnemygetAtk() << endl;
    cout << "DEF: " << mob.EnemygetDef() << endl;

    cout << "Battling..." << endl;
    
    Combat startBattle;
    startBattle.startCombat();
    //player.setHP(player.playergetHP() - mob.EnemygetAtk());
    cout << player.playergetHP() << endl;
    cout << mob.EnemygetHP() << endl;

}