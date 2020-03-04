#include "Textbasedgame.hpp"

Enemy::Enemy(){

}

string Enemy::genRandomMob(){
    vector<string> Mobs{"Bat", "Rat" , "Goblin"};
    srand(time(NULL));
    string randomMob = Mobs[rand() % Mobs.size()];
    return randomMob;
}

void Enemy::stats(){
    if(genRandomMob() == "Rat"){
        hp_ = 10;
        atk_ = 5;
        def_ = 5;
    }
    if(genRandomMob() == "Bat"){
        hp_ = 10;
        atk_ = 10;
        def_ = 0;
    }
    if(genRandomMob() == "Goblin"){
        hp_ = 10;
        atk_ = 7.5;
        def_ = 7.5;
    }
}

float Enemy::getHP(){
    float hp;
    if(genRandomMob() == "Rat" || "Bat" || "Goblin"){
       hp = hp_;
    }
    return hp;
}

float Enemy::getAtk(){
    float atk;
    if(genRandomMob() == "Rat"){
        atk = atk_;
    }
    if(genRandomMob() == "Bat"){
        atk = atk_;
    }
    if(genRandomMob() == "Goblin"){
        atk = atk_;
    }
    return atk;
}

float Enemy::getDef(){
    float def;
    if(genRandomMob() == "Rat"){
        def = def_;
    }
    if(genRandomMob() == "Bat"){
        def = def_;
    }
    if(genRandomMob() == "Goblin"){
        def = def_;
    }
    return def;
}
