#ifndef SMALL_MONSTER_H_INCLUDED
#define SMALL_MONSTER_H_INCLUDED
#include<iostream>
#include"Monster.h"
using namespace std;

class small_monster :public Monster {  //Monster（怪物）派生出small_monster(小怪)
	small_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e=0) :Monster(a, b, c, d) {   //属性初始化
	setmoney(e);
}
};
#endif
