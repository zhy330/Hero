#ifndef TANK_H_INCLUDED
#define TANK_H_INCLUDED
#include "Hero.h"
#include<iostream>
using namespace std;

class tank :public Hero{        //Hero��Ӣ�ۣ�������tank��̹�ˣ�
public:
	tank(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {        //���Գ�ʼ��
	}
};
#endif