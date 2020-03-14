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
    cout << "====================" << endl;
    cout << "Swords" << endl;
    cout << "[1]Golden Axe:     10 ATK, 100 Gold " << endl;
    cout << "[2]Death's Axe:    20 ATK, 150 Gold" << endl;
    cout << "[3]Battle Axe:     30 ATK, 200 Gold " << endl;
    cout << "====================" << endl;
    cout << "What would you like to do?" << endl;
    cout << "[1]Purchase [2]Exit" << endl;
    string shopChoice;
    cin >> shopChoice;
    if(shopChoice == "1"){
        cout << "Which sword would you like to buy?" << endl;
        cout << "[1] [2] [3]" << endl;
        string axeChoice;
        cin >> axeChoice;
        setAxe(a, axeChoice);
        if(a.getPlayerWeapon() != "Beginner's Axe"){
            a.setPlayerWeapon(weaponName_);
            a.playerSetATK(weaponATK_);
            a.setPlayerGold(-WeaponCost_);
            cout << "You've equipped " << weaponName_ << endl;
            cout << "New ATK: " << a.playergetAtk() << endl;
            cout << "New Gold: " << a.playergetGold() << endl;
        }
        else if(a.getPlayerWeapon() == weaponName_ || a.getPlayerWeapon() == "Beginner's Axe"){
            cout << "Not enough gold" << endl;
        }
    }
}

/*
the default stats of a axe
provides their name,atk, and cost
*/
void Weapons::setAxe(Character & a,string WhichWeapon){
    if(a.getPlayerWeapon() != "Beginner's Axe"){
        a.playerSetATK(-weaponATK_);
    }
    if(WhichWeapon == "1" && a.playergetGold() >= 100){
        weaponName_ = "Golden Axe";
        weaponATK_ = 10;
        WeaponCost_ = 100;
    }
    if(WhichWeapon == "2" && a.playergetGold() >= 150){
        weaponName_ = "Death's Axe";
        weaponATK_ = 20;
        WeaponCost_ = 150;
    }
    if(WhichWeapon == "3" && a.playergetGold() >= 200){
        weaponName_ = "Battle Axe";
        weaponATK_ = 30;
        WeaponCost_ = 200;
    }

}
/*
Provides user with different weapon choices
provides their atk/gold cost
whichever the user chooses to buy
it will replace the equip they have now
*/
void Weapons::StaffChoice(Character &a){
    cout << "====================" << endl;
    cout << "Staffs" << endl;
    cout << "[1]Great Staff:    10 ATK, 100 Gold " << endl;
    cout << "[2]Grand Staff:    20 ATK, 150 Gold" << endl;
    cout << "[3]War Staff:      30 ATK, 200 Gold " << endl;
    cout << "====================" << endl;
    cout << "What would you like to do?" << endl;
    cout << "[1]Purchase [2]Exit" << endl;
    string shopChoice;
    cin >> shopChoice;
    if(shopChoice == "1"){
        cout << "Which staff would you like to buy?" << endl;
        cout << "[1] [2] [3]" << endl;
        string staffChoice;
        cin >> staffChoice;
        if(a.getPlayerWeapon() != "Beginner's Staff"){
            setStaff(a,staffChoice);
            a.setPlayerWeapon(weaponName_);
            a.playerSetATK(weaponATK_);
            a.setPlayerGold(-WeaponCost_);
            cout << "You've equipped " << weaponName_ << endl;
            cout << "New ATK: " << a.playergetAtk() << endl;
            cout << "New Gold: " << a.playergetGold() << endl;
        }
        else if(a.getPlayerWeapon() == weaponName_ || a.getPlayerWeapon() == "Beginner's Staff"){
            cout << "Not enough gold" << endl;
        }
    }
}

/*
the default stats of a staff
provides their name,atk, and cost
*/
void Weapons::setStaff(Character &a,string WhichWeapon){
    if(a.getPlayerWeapon() != "Beginner's Staff"){
        a.playerSetATK(-weaponATK_);
    }
    if(WhichWeapon == "1"&& a.playergetGold() >= 100){
        weaponName_ = "Golden Staff";
        weaponATK_ = 10;
        WeaponCost_ = 100;
    }
    if(WhichWeapon == "2"&& a.playergetGold() >= 150){
        weaponName_ = "Death's Staff";
        weaponATK_ = 20;
        WeaponCost_ = 150;
    }
    if(WhichWeapon == "3"&& a.playergetGold() >= 200){
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
    cout << "====================" << endl;
    cout << "Bows" << endl;
    cout << "[1]Striker Bow:    10 ATK, 100 Gold " << endl;
    cout << "[2]Steel Bow:      20 ATK, 150 Gold" << endl;
    cout << "[3]Phoenix Bow:    30 ATK, 200 Gold " << endl;
    cout << "====================" << endl;
    cout << "What would you like to do?" << endl;
    cout << "[1]Purchase [2]Exit" << endl;
    string shopChoice;
    cin >> shopChoice;
    if(shopChoice == "1"){
        cout << "Which bow would you like to buy?" << endl;
        cout << "[1] [2] [3]" << endl;
        string bowChoice;
        cin >> bowChoice;
        if(a.getPlayerWeapon() != "Beginner's Bow"){
            setBow(a,bowChoice);
            a.setPlayerWeapon(weaponName_);
            a.playerSetATK(weaponATK_);
            a.setPlayerGold(-WeaponCost_);
            cout << "You've equipped " << weaponName_ << endl;
            cout << "New ATK: " << a.playergetAtk() << endl;
            cout << "New Gold: " << a.playergetGold() << endl;
        }
        else if(a.getPlayerWeapon() == weaponName_ || a.getPlayerWeapon() == "Beginner's Bow"){
            cout << "Not enough gold" << endl;
        }
    }
}

/*
the default stats of a bow
provides their name,atk, and cost
*/
void Weapons::setBow(Character &a,string WhichWeapon){
    if(a.getPlayerWeapon() != "Beginner's Bow"){
        a.playerSetATK(-weaponATK_);
    }
    if(WhichWeapon == "1"&& a.playergetGold() >= 100){
        weaponName_ = "Golden Bow";
        weaponATK_ = 10;
        WeaponCost_ = 100;
    }
    if(WhichWeapon == "2"&& a.playergetGold() >= 150){
        weaponName_ = "Death's Bow";
        weaponATK_ = 20;
        WeaponCost_ = 150;
    }
    if(WhichWeapon == "3"&& a.playergetGold() >= 200){
        weaponName_ = "Battle Bow";
        weaponATK_ = 30;
        WeaponCost_ = 2000;
    }
}

/*
provides the attack of a weapon
that is in the shop
*/
int Weapons::getWeaponATK(){
    return weaponATK_;
}

/*
returns the cost of a weapon that is 
in the shop for player to purchase
*/
int Weapons::getWeaponCost(){
    return WeaponCost_;
}