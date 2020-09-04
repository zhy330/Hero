#ifndef BIG_MONSTER_H_INCLUDED
#define BIG_MONSTER_H_INCLUDED
#include<iostream>
#include"Monster.h"
using namespace std;

class big_monster :public Monster {  //Monster（怪物）派生big_monster(大怪)
	big_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Monster(a, b, c, d) {   //属性初始化
		setmoney(e);
	}
};
#endif

