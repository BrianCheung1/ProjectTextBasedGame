#include "Textbasedgame.hpp"

Character::Character(){
    playername_ = "";
}

Character::Character(std::string name, std::string classname){
    playername_ = name;
    playerclassname_ = classname;
}

std::string Character::getname(){
    return playername_;
}

std::string Character::getclassname(){
    return playerclassname_;
}

void Character::setName(string name){
    playername_ = name;
}
void Character::setHP(float health){
    playerhp_ = health;
}
void Character::setClass(int choice){
    if(choice == 1){
        playerclassname_ = "Warrior";
        playerlevel_ = 1;
        playerexperience_ = 10;
        playerhp_ = 100;
        playeratk_ = 50;
        playerdef_ = 100;

    }
    if(choice == 2){
        playerclassname_ = "Mage";
        playerlevel_ = 1;
        playerexperience_ = 10;
        playerhp_ = 100;
        playeratk_ = 100;
        playerdef_ = 50;
    }
    if(choice == 3){
        playerclassname_ = "Archer";
        playerlevel_ = 1;
        playerexperience_ = 10;
        playerhp_ = 100;
        playeratk_ = 75;
        playerdef_ = 75;
    }
}

int Character::playergetLevel(){
    playerlevel_ = playerexperience_ * 0.1;
    return playerlevel_;
}

float Character::playergetHP(){
    return playerhp_;
}

float Character::playergetAtk(){
    return playeratk_;
}

float Character::playergetDef(){
    return playerdef_;
}


