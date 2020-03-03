/*#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

string RandomEnemy(){
    vector<string> enemy{"Rat", "Bat", "Goblin"};
    srand(time(NULL));
    string somemob;
    int randomnumber;
    randomnumber = rand() % enemy.size();
    somemob = enemy[randomnumber];
    return somemob;
}

string Rat(){
    vector<float> Stats{5, 1, 1}; //HP,ATTACK,DEFENSE
    cout << "Rat Stats:" << endl;
    cout << "HP:  " << Stats[0] << endl;
    cout << "ATK: " << Stats[1] << endl;
    cout << "DEF: " << Stats[2] << endl;
    return "";
}

string Bat(){
    vector<float> Stats{5, 1, 1}; //HP,ATTACK,DEFENSE
    cout << "Bat Stats:" << endl;
    cout << "HP:  " << Stats[0] << endl;
    cout << "ATK: " << Stats[1] << endl;
    cout << "DEF: " << Stats[2] << endl;
    return "";
}

string Goblin(){
    vector<float> Stats{5, 1, 1}; //HP,ATTACK,DEFENSE
    cout << "Goblin Stats:" << endl;
    cout << "HP:  " << Stats[0] << endl;
    cout << "ATK: " << Stats[1] << endl;
    cout << "DEF: " << Stats[2] << endl;
    return "";
}

string Warrior(){
    vector<float> startingStats{100, 5, 10}; //HP,ATTACK,DEFENSE
    cout << "Warrior Stats:" << endl;
    cout << "HP:  " << startingStats[0] << endl;
    cout << "ATK: " << startingStats[1] << endl;
    cout << "DEF: " << startingStats[2] << endl;
    return "";
}
string Mage(){
    vector<float> startingStats{100, 10, 5}; //HP,ATTACK,DEFENSE
    cout << "Warrior Stats:" << endl;
    cout << "HP:  " << startingStats[0] << endl;
    cout << "ATK: " << startingStats[1] << endl;
    cout << "DEF: " << startingStats[2] << endl;
    return "";
}
string Archer(){
    vector<float> startingStats{100, 7.5, 7.5}; //HP,ATTACK,DEFENSE
    cout << "Warrior Stats:" << endl;
    cout << "HP:  " << startingStats[0] << endl;
    cout << "ATK: " << startingStats[1] << endl;
    cout << "DEF: " << startingStats[2] << endl;
    return "";
}

int main() {
    int startingclass;

    cout << "Choose a class:" << endl;
    cout << "[1]Warrior" << endl;
    cout << "[2]Mage" << endl;
    cout << "[3]Archer" << endl;
    cin >> startingclass;

    if(startingclass == 1){
        Warrior();
    }
    if(startingclass == 2){
        Mage();
    }
    if(startingclass == 3){
        Archer();
    }
    
    if(RandomEnemy() == "Rat"){
        cout << "An enemy has appeared: " << RandomEnemy() << endl;
        Rat();
    }
    if(RandomEnemy() == "Bat"){
        cout << "An enemy has appeared: " << RandomEnemy() << endl;
        Bat();
    }
    if(RandomEnemy() == "Goblin"){
        cout << "An enemy has appeared: " << RandomEnemy() << endl;
        Goblin();
    }
}*/

#include "Textbasedgame.cpp"
int main(){
    Character name();
}