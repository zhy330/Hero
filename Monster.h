#ifndef MONSTER_H_INCLUDED
#define MONSTER_H_INCLUDED
#include<iostream>
#include"Biobgical.h"
using namespace std;

class Monster:public Biobgical {        //Biological派生出Monster（怪物）
public:
	Monster(double a = 0, double b = 0, double c = 0, string d = " ",int e=0):Biobgical(a, b, c, d) {   //属性初始化
		setmoney(e);
	}
	void setmoney(int money0){ money = money0; };
private:
	int money;  //击杀怪物后掉落的金币
};
#endif
