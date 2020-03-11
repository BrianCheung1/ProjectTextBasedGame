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
    void setClass(string choice);
    float playergetHP();
    int playergetLevel();
    void setPlayerHP(float health);
    float playergetAtk();
    float playergetDef();
    float playergetExp();
    void playeraddExperience(int Exp);
    void playerStats();
    void setPlayerGold(int gold);
    int playergetGold();


    private:
    string playername_;
    string playerclassname_;
    int playerlevel_;
    int playerexperience_;
    float playerhp_;
    float playeratk_;
    float playerdef_;
    int playergold_;

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
    string endBattle(Character &a, Enemy &b);
    void ActualCombat(Combat &c, Character &a, Enemy &b);
    private:
    
};

class Leveling : public Character {
    public:
    Leveling();
    void gainExperience();
};

class Places : public Character{
    public:
    Places();
    string nextPlace();
    string town();
    private:
};


class Town : public Places{
    public:
    Town();
    void whereInTown(Character &a);
    void townShop(Character &a);
    void townCrafting(Character &a);
    void townUpgrade(Character &a);
    void townSleep(Character &a);
    private:
};

class Death : public Places{
    public:
    Death();
    void respawn(Character &a);
};