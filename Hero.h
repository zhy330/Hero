#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include"Biobgical.h"
#include<iostream>
using namespace std;

class Hero:public Biobgical{   //Biobgical�����������Hero��Ӣ�ۣ�
public:
	Hero(double a = 0, double b = 0, double c = 0, string d = " "):Biobgical(a, b, c, d){       //���Գ�ʼ��
	}
};
#endif
