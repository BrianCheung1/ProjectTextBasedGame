#include "Textbasedgame.hpp"

Character::Character(){
    playername_ = "";
}

Character::Character(std::string name, std::string classname){
    playername_ = name;
    playerclassname_ = classname;
}

/*
Returns the name of the player
*/
std::string Character::getname(){
    return playername_;
}

/*
Returns the classname of the player
*/
std::string Character::getclassname(){
    return playerclassname_;
}

/*
Changes the name of the player 
depending on the user input
*/
void Character::setName(string name){
    playername_ = name;
}

/*
Changes the user hp
depending on the value provided through user input
or other functions
*/
void Character::setPlayerHP(double health){
    playerhp_ = health;
}

/*
Changes the class of the user depending on their choice
Each class provide different stats
And different class names
*/
void Character::setClass(string choice){
    if(choice == "1"){
        playerclassname_ = "Warrior";
        playeratk_ = 10;
        playerdef_ = 25;
        playerWeapon_ = "Beginner's Axe";
        playerskill_ = "Heavy Strike";
        playerskillmanacost_ = 5;
        playermp_ = 15;
        playerdefaultmp_ = 20;
    }
    if(choice == "2"){
        playerclassname_ = "Mage";
        playeratk_ = 30;
        playerdef_ = 5;
        playerWeapon_ = "Beginner's Staff";
        playerskill_ = "Fireball";
        playerskillmanacost_ = 10;
        playermp_ = 50;
        playerdefaultmp_ = 50;
    }
    if(choice == "3"){
        playerclassname_ = "Archer";
        playeratk_ = 20;
        playerdef_ = 15;
        playerWeapon_ = "Beginner's Bow";
        playerskill_ = "Rain of Arrows";
        playerskillmanacost_ = 10;
        playermp_ = 25;
        playerdefaultmp_ = 20;
    }
    playerhp_ = 100;
    playerdefaulthp_ = 100;
    playerexperience_ = 10;
    playerlevel_ = 1;
    playergold_ = 0;
}

/*
Returns the player level depending on 
their amount of experience
*/
int Character::getPlayerLevel(){
    if (playerlevel_ <= 0){
        playerlevel_ = 1;
    }
    return playerlevel_;
}

/*
returns the value of players HP
*/
double Character::getPlayerHP(){
    return playerhp_;
}

/*
Returns the value of the players attack
*/
float Character::getPlayerAtk(){
    return playeratk_;
}

/*
Returns the value of the players defense
*/
float Character::getPlayerDef(){
    return playerdef_;
}

float Character::getPlayerExp(){
    if(playerexperience_ <= 0){
        playerexperience_ = 0;
    }
    return playerexperience_;
};


/*
Adds experience to the player 
existing experience
*/
void Character::addPlayerExp(int Exp){
    if(playerexperience_ <= 0){
        playerexperience_ = 0;
    }
    else{
        playerexperience_ = Exp;
        playerlevel_ = playerexperience_ * 1/10;
    }
}

/*
return all stats values of player
*/
void Character::playerStats(){
    cout << "====================" << endl;
    cout << "Player Class: " << getclassname() << endl;
    cout << "Lvl: " << getPlayerLevel() << endl;
    cout << "HP:  " << getPlayerHP() << endl;
    cout << "MP:  " << getPlayerMana() << endl;
    cout << "ATK: " << getPlayerAtk() << endl;
    cout << "DEF: " << getPlayerDef() << endl;
    cout << "EXP: " << getPlayerExp() << endl;
    cout << "Gold: " << getPlayerGold() << endl;
    cout << "Weapon: " << getPlayerWeapon() << endl;
    cout << "Special Skill ATK: " << getPlayerSkillDmg() << endl;
    cout << "====================" << endl;
}

/*
sets a player gold the given amount + the amount they have
*/
void Character::setPlayerGold(int gold){
    playergold_ = gold;
    if(getPlayerGold() <= 0){
        playergold_ = 0;
    }
}

/*
returns the amount of gold a player has
*/
int Character::getPlayerGold(){
    return playergold_;
}

/*
sets a player weapon to the one provided
*/
void Character::setPlayerWeapon(string weapon){
    playerWeapon_ = weapon;
}

/*
returns the players weapon
*/
string Character::getPlayerWeapon(){
    return playerWeapon_;
}

/*
sets the stat of a player to the given amount + what they have
*/
void Character::setPlayerAtk(int atk){
    playeratk_ = atk;
}

/*
returns the skill of the player chosen class
*/
string Character::getPlayerSkill(){
    return playerskill_;
}

/*
returns the dmg of the player chosen class
*/
int Character::getPlayerSkillDmg(){
    playerskilldmg_ = playeratk_ * 1 / 2;
    return playerskilldmg_;
}

/*
returns the mana level of the player chosen class
*/
double Character::getPlayerMana(){
    return playermp_;
}

/*
sets the mana by adding it ontop of the mana they already ahve
*/
void Character::setPlayerMana(double mana){
    playermp_ = mana;
}

/*
gets the mana cost of the player chosen class skill
*/
int Character::getPlayerSkillManaCost(){
    return playerskillmanacost_;
}

/*
this is implemented in case in the future, 
player upgrade stats
*/
int Character::getPlayerDefaultMana(){
    return playerdefaultmp_;
}

/*
returns the original health that the player class has
*/
int Character::getPlayerDefaultHealth(){
    return playerdefaulthp_;
}

/*
sets the original health that the player class has
*/
void Character::setPlayerDefaultHealth(int health){
    playerdefaulthp_ = health;
}

/*
changes the mana of a players class to
however much is added on top
*/
void Character::setPlayerDefaultMana(int mana){
    playerdefaultmp_ = mana;
}

/*
sets the defense of a a player to the given amount
*/
void Character::setPlayerDef(int defense){
    playerdef_ = defense;
}

void Character::getPlayerBackpack(){
    sort(backpack.begin(), backpack.end());
    if(backpack.size() <= 0){
        cout << "Backpack Empty" << endl;
    }
    else if(backpack.size() >= 1){
        for (int i = 0; i < backpack.size(); i++){
            cout << "[" << i << "]" << backpack[i] << " ";
        }
    }
    cout << endl;
}

void Character::setPlayerBackpack(string item){
    backpack.push_back(item);
}

string Character::getPlayerBackpackItem(int number){
    return backpack.at(number);
}