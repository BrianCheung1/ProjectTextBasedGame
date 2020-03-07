#include "Textbasedgame.hpp"

Town::Town(){}

string Town::whereInTown() {
    string townChoice = town();
    if(townChoice == "1"){
        townShop();
    }
    else if(townChoice == "2"){
        townCrafting();
    }
    else if(townChoice == "3"){
        townUpgrade();
    }
    else if(townChoice == "4"){
        cout << "Back to Adventuring" << endl;
    }
    else if(townChoice == "5"){
        cout << "testing" << endl;
        whereInTown();
    }

    return "";
}

string Town::townShop(){   
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
    return whereInTown();
}


string Town::townCrafting(){
    cout << "Crafting" << endl;
    return whereInTown();
}

string Town::townUpgrade(){
    cout << "Upgrades: " << endl;
    return whereInTown();
}