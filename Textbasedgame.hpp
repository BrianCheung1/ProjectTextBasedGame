#pragma once

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

class Character{
    public:
    Character();
    Character(string name, string classname);
    string getname();
    string getclassname();
    void setName(string name);
    void setClass(int choice);
    float playergetHP();
    int playergetLevel();
    void setPlayerHP(float health);
    float playergetAtk();
    float playergetDef();

    private:
    string playername_;
    string playerclassname_;
    int playerlevel_;
    int playerexperience_;
    float playerhp_;
    float playeratk_;
    float playerdef_;

};

class Enemy{
    public:
    Enemy();
    string genRandomMob();
    void Enemystats();
    float EnemygetHP();
    float EnemygetAtk();
    float EnemygetDef();
    void setEnemyHP(float health);

    private:
    string Enemyname_;
    float Enemyhp_;
    float Enemyatk_;
    float Enemydef_;
};

class Combat : public Character, Enemy {
    public:
    Combat();
    void startPlayerCombat(Character &a, Enemy &b);
    void startEnemyCombat(Enemy &a, Character &b);
    private:
    
};
