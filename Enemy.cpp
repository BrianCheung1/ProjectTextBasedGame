#include "Textbasedgame.hpp"

Enemy::Enemy(){

}

/*
Generates a random mob
everything the function is called
*/
string Enemy::genRandomMob(){
    vector<string> Mobs{"Slime", "Rat" , "Goblin", "Snake", "Fairy", "Butterball"};
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
        Enemydef_ = 10;
    }
    else if(genRandomMob() == "Slime"){
        Enemyhp_ = 10;
        Enemyatk_ = 7.5;
        Enemydef_ = 7.5;
    }
    else if(genRandomMob() == "Goblin"){
        Enemyhp_ = 10;
        Enemyatk_ = 10;
        Enemydef_ = 5;
    }
    else if(genRandomMob() == "Snake"){
        Enemyhp_ = 10;
        Enemyatk_ = 3;
        Enemydef_ = 9;
    }
    else if(genRandomMob() == "Fairy"){
        Enemyhp_ = 10;
        Enemyatk_ = 6;
        Enemydef_ = 6;
    }
    else if(genRandomMob() == "Butterball"){
        Enemyhp_ = 10;
        Enemyatk_ = 9;
        Enemydef_ = 3;
    }
}

/*
Provides value of enemys HP
*/
float Enemy::EnemygetHP(){
    float hp;
    if(genRandomMob() == "Rat" || "Slime" || "Goblin"){
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
    if(genRandomMob() == "Slime"){
        atk = Enemyatk_;
    }
    if(genRandomMob() == "Goblin"){
        atk = Enemyatk_;
    }
    if(genRandomMob() == "Snake"){
        atk = Enemyatk_;
    }
    if(genRandomMob() == "Fairy"){
        atk = Enemyatk_;
    }
    if(genRandomMob() == "Butterball"){
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
    if(genRandomMob() == "Slime"){
        def = Enemydef_;
    }
    if(genRandomMob() == "Goblin"){
        def = Enemydef_;
    }
    if(genRandomMob() == "Snake"){
        def = Enemydef_;
    }
    if(genRandomMob() == "Fairy"){
        def = Enemydef_;
    }
    if(genRandomMob() == "Butterball"){
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
