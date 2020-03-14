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
        playerskilldmg_ = 10;
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
        playerskilldmg_ = 15;
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
        playerskilldmg_ = 10;
        playermp_ = 25;
        playerdefaultmp_ = 20;
    }
    playerhp_ = 100;
    playerexperience_ = 10;
    playerlevel_ = 1;
    playergold_ = 0;
}

/*
Returns the player level depending on 
their amount of experience
*/
int Character::playergetLevel(){
    return playerlevel_;
}

/*
returns the value of players HP
*/
double Character::playergetHP(){
    return playerhp_;
}

/*
Returns the value of the players attack
*/
float Character::playergetAtk(){
    return playeratk_;
}

/*
Returns the value of the players defense
*/
float Character::playergetDef(){
    return playerdef_;
}

float Character::playergetExp(){
    return playerexperience_;
};


/*
Adds experience to the player 
existing experience
*/
void Character::playeraddExperience(int Exp){
    if(playerexperience_ <= 0){
        playerexperience_ = 0;
    }
    else{
        playerexperience_ += Exp;
        playerlevel_ = playerexperience_ * 1/10;
    }
}

/*
return all stats values of player
*/
void Character::playerStats(){
    cout << "====================" << endl;
    cout << "Player Class: " << getclassname() << endl;
    cout << "Lvl: " << playergetLevel() << endl;
    cout << "HP:  " << playergetHP() << endl;
    cout << "MP:  " << getPlayerMana() << endl;
    cout << "ATK: " << playergetAtk() << endl;
    cout << "DEF: " << playergetDef() << endl;
    cout << "EXP: " << playergetExp() << endl;
    cout << "Gold: " << playergetGold() << endl;
    cout << "Weapon: " << getPlayerWeapon() << endl;
    cout << "====================" << endl;
}

/*
sets a player gold the given amount + the amount they have
*/
void Character::setPlayerGold(int gold){
    playergold_ += gold;
}

/*
returns the amount of gold a player has
*/
int Character::playergetGold(){
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
void Character::playerSetATK(int atk){
    playeratk_ += atk;
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
    playermp_ += mana;
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