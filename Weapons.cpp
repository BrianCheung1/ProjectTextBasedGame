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
    cout << "[1]Golden Axe:     50 ATK,  300 Gold " << endl;
    cout << "[2]Death's Axe:    100 ATK, 450 Gold" << endl;
    cout << "[3]Battle Axe:     150 ATK, 600 Gold " << endl;
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
            a.playerSetATK(a.playergetAtk() + weaponATK_);
            a.setPlayerGold(a.playergetGold()-WeaponCost_);
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
    if(WhichWeapon == "1" && a.playergetGold() >= 300){
        weaponName_ = "Golden Axe";
        weaponATK_ = 50;
        WeaponCost_ = 300;
    }
    if(WhichWeapon == "2" && a.playergetGold() >= 450){
        weaponName_ = "Death's Axe";
        weaponATK_ = 10;
        WeaponCost_ = 450;
    }
    if(WhichWeapon == "3" && a.playergetGold() >= 600){
        weaponName_ = "Battle Axe";
        weaponATK_ = 150;
        WeaponCost_ = 600;
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
    cout << "[1]Great Staff:    50 ATK,  300 Gold " << endl;
    cout << "[2]Grand Staff:    100 ATK, 450 Gold" << endl;
    cout << "[3]War Staff:      150 ATK, 600 Gold " << endl;
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
            a.playerSetATK(a.playergetAtk() + weaponATK_);
            a.setPlayerGold(a.playergetGold()-WeaponCost_);
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
    if(WhichWeapon == "1"&& a.playergetGold() >= 300){
        weaponName_ = "Golden Staff";
        weaponATK_ = 50;
        WeaponCost_ = 300;
    }
    if(WhichWeapon == "2"&& a.playergetGold() >= 450){
        weaponName_ = "Death's Staff";
        weaponATK_ = 100;
        WeaponCost_ = 450;
    }
    if(WhichWeapon == "3"&& a.playergetGold() >= 600){
        weaponName_ = "Battle Staff";
        weaponATK_ = 150;
        WeaponCost_ = 600;
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
    cout << "[1]Striker Bow:    50 ATK,  300 Gold " << endl;
    cout << "[2]Steel Bow:      100 ATK, 450 Gold" << endl;
    cout << "[3]Phoenix Bow:    150 ATK, 600 Gold " << endl;
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
            a.playerSetATK(a.playergetAtk() + weaponATK_);
            a.setPlayerGold(a.playergetGold() - WeaponCost_);
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
    if(WhichWeapon == "1"&& a.playergetGold() >= 300){
        weaponName_ = "Golden Bow";
        weaponATK_ = 50;
        WeaponCost_ = 300;
    }
    if(WhichWeapon == "2"&& a.playergetGold() >= 450){
        weaponName_ = "Death's Bow";
        weaponATK_ = 100;
        WeaponCost_ = 450;
    }
    if(WhichWeapon == "3"&& a.playergetGold() >= 600){
        weaponName_ = "Battle Bow";
        weaponATK_ = 150;
        WeaponCost_ = 600;
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