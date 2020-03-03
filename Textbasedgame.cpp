#include "Textbasedgame.hpp"

Character::Character(){
    
}

string Character::name(){
    cout << "What is your name?"<< endl;
    string playername;
    cin >> playername;

    return playername;
}

