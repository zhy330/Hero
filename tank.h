#ifndef TANK_H_INCLUDED
#define TANK_H_INCLUDED
#include "Hero.h"
#include<iostream>
using namespace std;

class tank :public Hero{        //Hero（英雄）派生出tank（坦克）
public:
	tank(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {        //属性初始化
	}
};
#endif