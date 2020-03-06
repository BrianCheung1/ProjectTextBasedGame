#include "Textbasedgame.hpp"

Places::Places(){}

int Places::nextPlace() {
    int placeNumber;
    cout << "Where would you like to go?" <<endl;
    cout << "[1]Town [2]Adventure [3]Exit Game" << endl;
    cin >> placeNumber;

    return placeNumber;
}