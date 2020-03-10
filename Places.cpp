#include "Textbasedgame.hpp"

Places::Places(){}

/*
provides different choices for user 
Each one represents an action that user can do
*/
string Places::nextPlace() {
    string placeNumber;
    while(placeNumber != "1" && placeNumber != "2" && placeNumber != "3" && placeNumber != "4"){
        cout << "Where would you like to go?" <<endl;
        cout << "[1]Town [2]Adventure [3]Check Stats [4]Exit Game"  << endl;
        cin >> placeNumber;
    }
    return placeNumber;
}

/*
Provide options of town that user can choose from
Each one will provide user with helpful benefits
*/
string Places::town(){
    string townNumber;
    while(townNumber != "1" && townNumber != "2" && townNumber != "3" && townNumber != "4" && townNumber != "5"){
        cout << "What would you like to do?" << endl;
        cout << "[1]Shop [2]Craft [3]Upgrade [4]Adventure" << endl;
        cin >> townNumber;
    }
    return townNumber;
}