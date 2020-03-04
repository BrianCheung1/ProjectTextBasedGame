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
    int getLevel();
    float getHP();
    float getAtk();
    float getDef();
    
    private:
    string name_;
    string classname_;
    int level_;
    int experience_;
    float hp_;
    float atk_;
    float def_;

};

class Enemy{
    public:
    Enemy();
    string genRandomMob();
    void stats();
    float getHP();
    float getAtk();
    float getDef();

    private:
    string name_;
    float hp_;
    float atk_;
    float def_;
};

class Combat{
    public:
    Combat();
    int startCombat();
    int endCombat();
    private:
    
};