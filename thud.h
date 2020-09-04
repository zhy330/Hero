#ifndef THUD_H_INCLUDED
#define THUD_H_INCLUDED
#include "Hero.h"
#include<iostream>
using namespace std;

class thud: public Hero{   //Hero（英雄）派生出thud（刺客）
public:
	thud(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {          //属性初始化
	};
};
#endif
