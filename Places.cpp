#include "Textbasedgame.hpp"

Places::Places(){}

string Places::nextPlace() {
    string placeNumber;
    while(placeNumber != "1" && placeNumber != "2" && placeNumber != "3" && placeNumber != "4"){
        cout << "Where would you like to go?" <<endl;
        cout << "[1]Town [2]Adventure [3]Check Stats [4]Exit Game"  << endl;
        cin >> placeNumber;
    }

    return placeNumber;
}