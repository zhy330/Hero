#ifndef MID_MONSTER_H_INCLUDED
#define MID_MONSTER_H_INCLUDED
#include<iostream>
#include"Monster.h"
using namespace std;



class mid_monster :public Monster {  //Monster�����������mid_monster(һ���)
	mid_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Monster(a, b, c, d) {   //���Գ�ʼ��
		setmoney(e);
	}
};
#endif
