#ifndef THUD_H_INCLUDED
#define THUD_H_INCLUDED
#include "Hero.h"
#include<iostream>
using namespace std;

class thud: public Hero{   //Hero��Ӣ�ۣ�������thud���̿ͣ�
public:
	thud(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {          //���Գ�ʼ��
	};
};
#endif
