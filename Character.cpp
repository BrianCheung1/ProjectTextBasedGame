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

/*
Returns the player level depending on 
their amount of experience
*/
int Character::playergetLevel(){
    playerlevel_ = playerexperience_ * 0.1;
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

/*
Adds experience to the player 
existing experience
*/
void Character::playeraddExperience(int Exp){
    playerexperience_ += Exp;
}
/*
return all stats values of player
*/
void Character::playerStats(){
    cout << "Player Lvl: " << playerlevel_ << endl;
    cout << "Player Exp: " << playerexperience_ << endl;

}