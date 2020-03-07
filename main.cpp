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
    cout << "[1]Warrior [2]Mage [3]Archer" << endl;
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
    cout << "EXP: " << player.playergetExp() << endl;
    cout << "==================" << endl;

    Enemy mob;
    Combat startBattle;
    startBattle.ActualCombat(startBattle,player,mob);

    Places Going;
    string Gameplay;
    string placeChoice = Going.nextPlace();
    
    while(Gameplay != "no"){
        if(placeChoice == "1"){
            Town townAction;
            townAction.whereInTown();
            placeChoice = Going.nextPlace();
        }
        if(placeChoice == "2"){
            startBattle.ActualCombat(startBattle,player,mob);
            placeChoice = Going.nextPlace();
        }
        else if(placeChoice  == "3"){
            player.playerStats();
            placeChoice = Going.nextPlace();
        }
        else if(placeChoice  == "4"){
            Gameplay = "no";
        }
    }
}   