#include "Textbasedgame.hpp"

Character::Character(){
    name_ = "";
}

Character::Character(std::string name, std::string classname){
    name_ = name;
    classname_ = classname;
}

std::string Character::getname(){
    return name_;
}

std::string Character::getclassname(){
    return classname_;
}

void Character::setName(string name){
    name_ = name;
}

void Character::setClass(int choice){
    if(choice == 1){
        classname_ = "Warrior";
        level_ = 1;
        experience_ = 10;
        hp_ = 100;
        atk_ = 50;
        def_ = 100;

    }
    if(choice == 2){
        classname_ = "Mage";
        level_ = 1;
        experience_ = 10;
        hp_ = 100;
        atk_ = 100;
        def_ = 50;
    }
    if(choice == 3){
        classname_ = "Archer";
        level_ = 1;
        experience_ = 10;
        hp_ = 100;
        atk_ = 75;
        def_ = 75;
    }
}

int Character::getLevel(){
    level_ = experience_ * 0.1;
    return level_;
}

float Character::getHP(){
    return hp_;
}

float Character::getAtk(){
    return atk_;
}

float Character::getDef(){
    return def_;
}


