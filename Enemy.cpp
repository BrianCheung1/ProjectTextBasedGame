#include "Textbasedgame.hpp"

Enemy::Enemy(){

}

/*
Generates a random mob
everything the function is called
*/
string Enemy::genRandomMob(){
    vector<string> Mobs{"Bat", "Rat" , "Goblin"};
    srand(time(NULL));
    string randomMob = Mobs[rand() % Mobs.size()];
    return randomMob;
}

/*
Provideds the enemys with different stats
*/
void Enemy::Enemystats(){
    if(genRandomMob() == "Rat"){
        Enemyhp_ = 10;
        Enemyatk_ = 5;
        Enemydef_ = 5;
    }
    if(genRandomMob() == "Bat"){
        Enemyhp_ = 10;
        Enemyatk_ = 7.5;
        Enemydef_ = 7.5;
    }
    if(genRandomMob() == "Goblin"){
        Enemyhp_ = 10;
        Enemyatk_ = 10;
        Enemydef_ = 10;
    }
}

/*
Provides value of enemys HP
*/
float Enemy::EnemygetHP(){
    float hp;
    if(genRandomMob() == "Rat" || "Bat" || "Goblin"){
       hp = Enemyhp_;
    }
    return hp;
}

/*
Provides value of enemy attack
*/
float Enemy::EnemygetAtk(){
    float atk;
    if(genRandomMob() == "Rat"){
        atk = Enemyatk_;
    }
    if(genRandomMob() == "Bat"){
        atk = Enemyatk_;
    }
    if(genRandomMob() == "Goblin"){
        atk = Enemyatk_;
    }
    return atk;
}

/*
returns value of enemys defense
*/
float Enemy::EnemygetDef(){
    float def;
    if(genRandomMob() == "Rat"){
        def = Enemydef_;
    }
    if(genRandomMob() == "Bat"){
        def = Enemydef_;
    }
    if(genRandomMob() == "Goblin"){
        def = Enemydef_;
    }
    return def;
}

/*
sets the hp of the enemy
*/
void Enemy::setEnemyHP(float health){
    Enemyhp_ = health;
}
