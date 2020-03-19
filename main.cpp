#include "Textbasedgame.hpp"

int main(){
    
    cout << "What is your name?" << endl;
    string name;
    cin >> name;

    Character player;
    player.setName(name);
    Items item;
    /*
    Provide 3 different classes for user to choose from
    Each come with different stats
    */
    string choice;
    cout << "What class would you like to play?" << endl;
    while(choice != "1" && choice != "2" && choice != "3"){
        cout << "[1]Warrior [2]Mage [3]Archer" << endl;
        cin >> choice;
    }

    /*
    Changes user to their chosen class
    Provides user with useful stats
    */
    player.setClass(choice);
    player.playerStats();

    Enemy mob;
    Combat startBattle;
    Places Going;
    string Gameplay;
    //first choice of where a player wants to go
    string placeChoice = Going.nextPlace();

    Death zeroHP;
    /*
    Main gameplay
    Gives the user different options of what they want to do
    Town      -1
    Combat    -2
    Stats     -3
    Exit Game -4
    */
    while(Gameplay != "no"){
        if(placeChoice == "1"){
            Town townAction;
            townAction.whereInTown(player,item);
            placeChoice = Going.nextPlace();
        }
        else if(placeChoice == "2"){
            startBattle.ActualCombat(startBattle, player, mob);
            if(player.getPlayerHP() <= 0){
                zeroHP.respawn(player);
                placeChoice = Going.nextPlace();
            }
            else{
                placeChoice = Going.nextPlace();
            }
        }
        else if(placeChoice  == "3"){
            player.playerStats();
            placeChoice = Going.nextPlace();
        }
        else if(placeChoice  == "4"){
            Going.bossCave(startBattle, player, mob);
            if(player.getPlayerHP() <= 0){
                zeroHP.respawn(player);
                placeChoice = Going.nextPlace();
            }
            else{
                placeChoice = Going.nextPlace();
            }
        }
        else if(placeChoice == "5"){
            player.getPlayerBackpack();
            placeChoice = Going.nextPlace();
        }
        else if(placeChoice == "6"){
            Going.fishing(player);
            placeChoice = Going.nextPlace();
        }
        else if(placeChoice  == "7"){
            Gameplay = "no";
        }
    }
}   

