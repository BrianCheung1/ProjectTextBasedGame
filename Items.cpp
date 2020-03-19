#include "Textbasedgame.hpp"

Items::Items(){}

int Items::getFishPrice(){
    return FishPrices_;
}

void Items::fishPrices(Character &a, int number){

    if(a.getPlayerBackpackItem(number) == "Anchovy"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Bass"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Bluefish"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Buffalo Fish"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Butterfish"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Calamari"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Carp"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Chilean sea bass"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Clam"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Cod"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Crab"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Crayfish"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Croaker"){
        FishPrices_ = 3;
    }
    if(a.getPlayerBackpackItem(number) == "Old Boot"){
        FishPrices_ = 0;
    }
    if(a.getPlayerBackpackItem(number) == "Rusty Can"){
        FishPrices_ = 0;
    }
    if(a.getPlayerBackpackItem(number) == "Worm"){
        FishPrices_ = 0;
    }

}
