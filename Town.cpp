#include "Textbasedgame.hpp"

Town::Town(){}

/*
Returns the choice of the user
of what they would like to do in town
*/
void Town::whereInTown(Character &a) {
    string townChoice = town();
    if(townChoice == "1"){
        townShop(a);
    }
    else if(townChoice == "2"){
        a.playerStats();
        whereInTown(a);
    }
    else if(townChoice == "3"){
        townSleep(a);
    }
}

/*
in the shop, user can purchase different weapons
3 weapon types based on class
Weapons give boost to atk
*/
void Town::townShop(Character &a){   
    weaponChoice(a);
    whereInTown(a);
}

/*
Crafting will allow user to take material they've gathered
to create a unique weapon
with some random stats
*/
void Town::townCrafting(Character &a){
    cout << "Crafting" << endl;
    whereInTown(a);
}

/*
Upgrades will allow user to upgrade their stats
HP,ATK,DEF
*/
void Town::townUpgrade(Character &a){
    cout << "Upgrades: " << endl;
    whereInTown(a);
}

/*
this allows a player to heal up
if they have enough gold
they can sleep and heal back to full hp
*/
void Town::townSleep(Character &a){
    string sleepChoice;
    while(sleepChoice != "1" && sleepChoice != "2"){
        cout << "What would you like to do? " << endl;
        cout << "[1]Sleep(25 Gold) [2]Exit" << endl;
        cin >> sleepChoice;
    }
    if(sleepChoice == "1" && a.playergetGold() >=25){
        a.setPlayerGold(-25);
        a.setPlayerHP(100);
        cout << "You now have " << a.playergetGold() << " gold left" << endl;
    }
    else if(a.playergetGold() < 25){
        cout << "You dont have enough gold" << endl;
    }
    whereInTown(a);
}