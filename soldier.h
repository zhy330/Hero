#ifndef SOLDIER_H_INCLUDED
#define SOLDIER_H_INCLUDED
#include "Hero.h"
#include<iostream>
using namespace std;

class soldier:public Hero{  //Hero��Ӣ�ۣ�������soldier��սʿ��
public:
	soldier(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {   //���Գ�ʼ��
	};

};
#endif