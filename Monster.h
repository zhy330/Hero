#ifndef MONSTER_H_INCLUDED
#define MONSTER_H_INCLUDED
#include<iostream>
#include"Biobgical.h"
using namespace std;

class Monster:public Biobgical {        //Biological������Monster�����
public:
	Monster(double a = 0, double b = 0, double c = 0, string d = " ",int e=0):Biobgical(a, b, c, d) {   //���Գ�ʼ��
		setmoney(e);
	}
	void setmoney(int money0){ money = money0; };
private:
	int money;  //��ɱ��������Ľ��
};
#endif
