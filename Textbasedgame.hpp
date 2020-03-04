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
    void setHP(float health);
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

    private:
    string Enemyname_;
    float Enemyhp_;
    float Enemyatk_;
    float Enemydef_;
};

class Combat : public Character, Enemy{
    public:
    Combat();
    void startCombat();
    private:
    
};
