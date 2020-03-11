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
    string weaponChoice;
    cout << "What weapons are you looking for?" << endl;
    cout << "[1]Sword [2]Staff [3]Bow" << endl;
    cin >> weaponChoice;
    if(weaponChoice == "1"){
        cout << "Swords" << endl;
        cout << "[1]Orc Cleaver:    10 ATK, 100 Gold " << endl;
        cout << "[2]Proud Glory:    20 ATK, 150 Gold" << endl;
        cout << "[3]Heart Breaker:  30 ATK, 200 Gold " << endl;
        cout << "[4]Flamed Edge:    40 ATK, 250 Gold " << endl;
        cout << "[5]Divine Steel:   50 ATK, 300 Gold " << endl;
        cout << "What would you like to do?" << endl;
        cout << "[1]Purchase [2]Exit" << endl;
        string shopChoice;
        cin >> shopChoice;
        if(shopChoice == "1"){
            cout << "Which sword would you like to buy?" << endl;
            cout << "[1] [2] [3] [4] [5]" << endl;
            string swordChoice;
            cin >> swordChoice;
        }
    }
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

void Town::townSleep(Character &a){
    string sleepChoice;
    while(sleepChoice != "1" && sleepChoice != "2"){
        cout << "What would you like to do? " << endl;
        cout << "[1]Sleep(25 Gold) [2]Exit" << endl;
        cin >> sleepChoice;
    }
    if(sleepChoice == "1"){
        a.setPlayerGold(a.playergetGold() - 25);
        a.setPlayerHP(100);
    }
    whereInTown(a);
}