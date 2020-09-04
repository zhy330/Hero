#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include"Biobgical.h"
#include<iostream>
using namespace std;

class Hero:public Biobgical{   //Biobgical（生物）派生出Hero（英雄）
public:
	Hero(double a = 0, double b = 0, double c = 0, string d = " "):Biobgical(a, b, c, d){       //属性初始化
	}
};
#endif
