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
        townUpgrade(a);
    }
    else if(townChoice == "4"){
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
HP,MP,ATK,DEF
each upgrade is 25G
if not enough gold, wont allow user to purchase
*/
void Town::townUpgrade(Character &a){
    cout << "Upgrades: " << endl;
    cout << "What stats would you like to upgrade?" << endl;
    cout << "25 gold for an upgrade" << endl;
    cout << "[1]HP(+10) [2]MP(+10) [3]ATK(+5) [4]DEF(+5) [5]Exit" << endl;
    string upgrade;
    cin >> upgrade;
    //If player has gold, takes default hp and adds 10
    //then returns that new hp to user
    if(upgrade == "1" && a.getPlayerGold() >= 25){
        cout << "HP: " << a.getPlayerDefaultHealth() << endl;
        a.setPlayerHP(a.getPlayerDefaultHealth());
        a.setPlayerDefaultHealth(a.getPlayerDefaultHealth() + 10);
        a.setPlayerHP(a.getPlayerDefaultHealth());
        a.setPlayerGold(a.getPlayerGold() - 25);
        cout << "New HP: " << a.getPlayerHP() << endl;

    }
    //else if statement to make sure player cant upgrade if not enough gold
    else if(upgrade == "1" && a.getPlayerGold() < 25){
        cout << "You don't have enough gold" << endl;
    }
    else if(upgrade == "2" && a.getPlayerGold() >= 25){
        cout << "MP: " << a.getPlayerDefaultMana() << endl;
        a.setPlayerMana(a.getPlayerDefaultMana());
        a.setPlayerDefaultMana(a.getPlayerDefaultMana() + 10);
        a.setPlayerMana(a.getPlayerDefaultMana());
        a.setPlayerGold(a.getPlayerGold() - 25);
        cout << "New MP: " << a.getPlayerDefaultMana() << endl;
    }
    else if(upgrade == "2" && a.getPlayerGold() < 25){
        cout << "You don't have enough gold" << endl;
        
    }
    else if(upgrade == "3" && a.getPlayerGold() >= 25){
        cout << "ATK: " << a.getPlayerAtk() << endl;
        a.setPlayerAtk(a.getPlayerAtk() + 5);
        a.setPlayerGold(a.getPlayerGold() - 25);
        cout << "New ATK: " << a.getPlayerAtk() << endl;
    }
    else if(upgrade == "3" && a.getPlayerGold() < 25){
        cout << "You don't have enough gold" << endl;
    }
    else if(upgrade == "4" && a.getPlayerGold() >= 25){
        cout << "DEF: " << a.getPlayerDef() << endl;
        a.setPlayerDef(a.getPlayerDef() + 5);
        a.setPlayerGold(a.getPlayerGold() - 25);
        cout << "New DEF: " << a.getPlayerDef() << endl;
    }
    else if(upgrade == "4" && a.getPlayerGold() < 25){
        cout << "You don't have enough gold" << endl;
    }
    
    whereInTown(a);
}

/*
this allows a player to heal up
if they have enough gold
they can sleep and heal back to full hp and mp
*/
void Town::townSleep(Character &a){
    string sleepChoice;
    while(sleepChoice != "1" && sleepChoice != "2"){
        cout << "What would you like to do? " << endl;
        cout << "[1]Sleep(25 Gold) [2]Exit" << endl;
        cin >> sleepChoice;
    }
    if(sleepChoice == "1" && a.getPlayerGold() >=25){
        a.setPlayerGold(a.getPlayerGold()-25);
        a.setPlayerHP(100);
        a.setPlayerMana(a.getPlayerDefaultMana());
        cout << "Your HP: " << a.getPlayerHP() << endl;
        cout << "Your MP: " << a.getPlayerMana() << endl;
        cout << "You now have " << a.getPlayerGold() << " gold left" << endl;
    }
    else if(sleepChoice == "1" && a.getPlayerGold() < 25){
        cout << "You dont have enough gold" << endl;
    }
    whereInTown(a);
}