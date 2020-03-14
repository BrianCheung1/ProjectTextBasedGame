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
Provides the enemys with different stats
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
    return Enemyhp_;
}

/*
Provides value of enemy attack
*/
float Enemy::EnemygetAtk(){
    return Enemyatk_;
}

/*
returns value of enemys defense
*/
float Enemy::EnemygetDef(){
    return Enemydef_;
}

/*
sets the hp of the enemy
*/
void Enemy::setEnemyHP(float health){
    Enemyhp_ = health;
}

/*
every five levels Enemys will have their stats
increased by 2(Just for stats to look nice)
*/
void Enemy::harderEnemy(Character &a){
    int playerlevel = floor(a.playergetLevel() / 5);
    cout << playerlevel << endl;
    if(playerlevel <= 0){
        playerlevel = 1;
    }
    if(playerlevel > 1){
        for(int i = 0; i < playerlevel - 1; i++){
            Enemyhp_ *= 2;
            Enemyatk_ *= 2;
            Enemydef_ *= 2;
        }
    }
}
    
