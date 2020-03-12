#include "Textbasedgame.hpp"

Weapons::Weapons(){}

/*
Provides user with different weapon choices
whichever they choose will lead to more of that weapon
choice and their atk/values
*/
void Weapons::weaponChoice(Character &a){
    string weaponChoiceNumber;
    cout << "What weapons are you looking for?" << endl;
    cout << "[1]Axe [2]Staff [3]Bow" << endl;
    cin >> weaponChoiceNumber;
    if(weaponChoiceNumber == "1"){
        AxeChoice(a);
    }
    else if(weaponChoiceNumber == "2"){
        StaffChoice(a);
    }
    else if(weaponChoiceNumber == "3"){
        BowChoice(a);
    }
}

/*
Provides user with different weapon choices
provides their atk/gold cost
whichever the user chooses to buy
it will replace the equip they have now
*/
void Weapons::AxeChoice(Character &a){
    cout << "Swords" << endl;
    cout << "[1]Golden Axe:     10 ATK, 100 Gold " << endl;
    cout << "[2]Death's Axe:    20 ATK, 150 Gold" << endl;
    cout << "[3]Battle Axe:     30 ATK, 200 Gold " << endl;
    cout << "What would you like to do?" << endl;
    cout << "[1]Purchase [2]Exit" << endl;
    string shopChoice;
    cin >> shopChoice;
    if(shopChoice == "1"){
        cout << "Which sword would you like to buy?" << endl;
        cout << "[1] [2] [3]" << endl;
        if(a.getPlayerWeapon() != "Beginner's Axe"){
            a.playerSetATK(-weaponATK_);
        }
        string axeChoice;
        cin >> axeChoice;
        setAxe(axeChoice);
        a.setPlayerWeapon(weaponName_);
        a.playerSetATK(weaponATK_);
        a.setPlayerGold(-WeaponCost_);
        cout << "You've equipped " << weaponName_ << endl;
        cout << "New ATK: " << a.playergetAtk() << endl;
        cout << "New Gold: " << a.playergetGold() << endl;
    }
}

/*
the default stats of a axe
provides their name,atk, and cost
*/
void Weapons::setAxe(string WhichWeapon){
    if(WhichWeapon == "1"){
        weaponName_ = "Golden Axe";
        weaponATK_ = 10;
        WeaponCost_ = 100;
    }
    if(WhichWeapon == "2"){
        weaponName_ = "Death's Axe";
        weaponATK_ = 20;
        WeaponCost_ = 150;
    }
    if(WhichWeapon == "3"){
        weaponName_ = "Battle Axe";
        weaponATK_ = 30;
        WeaponCost_ = 2000;
    }

}
/*
Provides user with different weapon choices
provides their atk/gold cost
whichever the user chooses to buy
it will replace the equip they have now
*/
void Weapons::StaffChoice(Character &a){
    cout << "Staffs" << endl;
    cout << "[1]Great Staff:    10 ATK, 100 Gold " << endl;
    cout << "[2]Grand Staff:    20 ATK, 150 Gold" << endl;
    cout << "[3]War Staff:      30 ATK, 200 Gold " << endl;
    cout << "What would you like to do?" << endl;
    cout << "[1]Purchase [2]Exit" << endl;
    string shopChoice;
    cin >> shopChoice;
    if(shopChoice == "1"){
        cout << "Which staff would you like to buy?" << endl;
        cout << "[1] [2] [3]" << endl;
        if(a.getPlayerWeapon() != "Beginner's Staff"){
            a.playerSetATK(-weaponATK_);
        }
        string staffChoice;
        cin >> staffChoice;
        setAxe(staffChoice);
        a.setPlayerWeapon(weaponName_);
        a.playerSetATK(weaponATK_);
        a.setPlayerGold(-WeaponCost_);
        cout << "You've equipped " << weaponName_ << endl;
        cout << "New ATK: " << a.playergetAtk() << endl;
        cout << "New Gold: " << a.playergetGold() << endl;
        
    }
}

/*
the default stats of a staff
provides their name,atk, and cost
*/
void Weapons::setStaff(string WhichWeapon){
    if(WhichWeapon == "1"){
        weaponName_ = "Golden Staff";
        weaponATK_ = 10;
        WeaponCost_ = 100;
    }
    if(WhichWeapon == "2"){
        weaponName_ = "Death's Staff";
        weaponATK_ = 20;
        WeaponCost_ = 150;
    }
    if(WhichWeapon == "3"){
        weaponName_ = "Battle Staff";
        weaponATK_ = 30;
        WeaponCost_ = 2000;
    }
}
/*
Provides user with different weapon choices
provides their atk/gold cost
whichever the user chooses to buy
it will replace the equip they have now
*/
void Weapons::BowChoice(Character &a){
    cout << "Bows" << endl;
    cout << "[1]Striker Bow:    10 ATK, 100 Gold " << endl;
    cout << "[2]Steel Bow:      20 ATK, 150 Gold" << endl;
    cout << "[3]Phoenix Bow:    30 ATK, 200 Gold " << endl;
    cout << "What would you like to do?" << endl;
    cout << "[1]Purchase [2]Exit" << endl;
    string shopChoice;
    cin >> shopChoice;
    if(shopChoice == "1"){
        cout << "Which bow would you like to buy?" << endl;
        cout << "[1] [2] [3]" << endl;
        if(a.getPlayerWeapon() != "Beginner's Bow"){
            a.playerSetATK(-weaponATK_);
        }
        string bowChoice;
        cin >> bowChoice;
        setAxe(bowChoice);
        a.setPlayerWeapon(weaponName_);
        a.playerSetATK(weaponATK_);
        a.setPlayerGold(-WeaponCost_);
        cout << "You've equipped " << weaponName_ << endl;
        cout << "New ATK: " << a.playergetAtk() << endl;
        cout << "New Gold: " << a.playergetGold() << endl;
        
    }
}

/*
the default stats of a bow
provides their name,atk, and cost
*/
void Weapons::setBow(string WhichWeapon){
    if(WhichWeapon == "1"){
        weaponName_ = "Golden Bow";
        weaponATK_ = 10;
        WeaponCost_ = 100;
    }
    if(WhichWeapon == "2"){
        weaponName_ = "Death's Bow";
        weaponATK_ = 20;
        WeaponCost_ = 150;
    }
    if(WhichWeapon == "3"){
        weaponName_ = "Battle Bow";
        weaponATK_ = 30;
        WeaponCost_ = 2000;
    }
}

/*
Suppose to return the atk of the weapon
however idk how to implement this atm
*/
int Weapons::getWeaponATK(){
    return weaponATK_;
}

int Weapons::getWeaponCost(){
    return WeaponCost_;
}