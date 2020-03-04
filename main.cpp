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
    cout << "Lvl: " << player.getLevel() << endl;
    cout << "HP:  " << player.getHP() << endl;
    cout << "ATK: " << player.getAtk() << endl;
    cout << "DEF: " << player.getDef() << endl;
    cout << "==================" << endl;

    Enemy mob;
    cout << mob.genRandomMob() << endl;
    mob.stats();
    cout << "HP:  " << mob.getHP() << endl;
    cout << "ATK: " << mob.getAtk() << endl;
    cout << "DEF: " << mob.getDef() << endl;

    cout << "Battling..." << endl;
    //mob.getHP() = mob.getHP() - player.getAtk()


}