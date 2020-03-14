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
    double playergetHP();
    int playergetLevel();
    void setPlayerHP(double health);
    float playergetAtk();
    float playergetDef();
    float playergetExp();
    void playeraddExperience(int Exp);
    void playerStats();
    void setPlayerGold(int gold);
    int playergetGold();
    void setPlayerWeapon(string weapon);
    string getPlayerWeapon();
    void playerSetATK(int atk);
    string getPlayerSkill();
    int getPlayerSkillDmg();
    double getPlayerMana();
    void setPlayerMana(double mana);
    int getPlayerSkillManaCost();
    int getPlayerDefaultMana();


    private:
    string playername_;
    string playerclassname_;
    int playerlevel_;
    int playerexperience_;
    double playerhp_;
    double playermp_;
    float playeratk_;
    float playerdef_;
    float playergold_;
    string playerWeapon_;
    string playerskill_;
    int playerskilldmg_;
    int playerskillmanacost_;
    int playerdefaultmp_;

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
    void startEnemyCombat(Enemy &a, Character &b, string attack);
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

class Weapons{
    public:
    Weapons();
    void weaponChoice(Character &a);
    void AxeChoice(Character &a);
    void StaffChoice(Character &a);
    void BowChoice(Character &a);
    void setAxe(Character &a, string WhichWeapon);
    void setStaff(Character &a,string WhichWeapon);
    void setBow(Character &a,string WhichWeapon);
    int getWeaponATK();
    int getWeaponCost();

    private:
    int weaponATK_;
    int WeaponCost_;
    string weaponName_;
};

class Town : public Places, Weapons{
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
