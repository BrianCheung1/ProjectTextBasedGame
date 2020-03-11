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
void Character::setPlayerHP(float health){
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
        playeratk_ = 50;
        playerdef_ = 100;

    }
    if(choice == "2"){
        playerclassname_ = "Mage";
        playeratk_ = 100;
        playerdef_ = 50;
    }
    if(choice == "3"){
        playerclassname_ = "Archer";
        playeratk_ = 75;
        playerdef_ = 75;
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
float Character::playergetHP(){
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
        playerlevel_ = playerexperience_ * 0.1;
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
    cout << "ATK: " << playergetAtk() << endl;
    cout << "DEF: " << playergetDef() << endl;
    cout << "EXP: " << playergetExp() << endl;
    cout << "Gold: " << playergetGold() << endl;
    cout << "====================" << endl;
}

void Character::setPlayerGold(int gold){
    playergold_ += gold;
}

int Character::playergetGold(){
    return playergold_;
}