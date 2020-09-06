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




//Monster��������
class small_monster :public Monster {  //Monster�����������small_monster(С��)
	small_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Monster(a, b, c, d) {   //���Գ�ʼ��
		setmoney(e);
	}
};


class mid_monster :public Monster {  //Monster�����������mid_monster(һ���)
	mid_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Monster(a, b, c, d) {   //���Գ�ʼ��
		setmoney(e);
	}
};

class big_monster :public Monster {  //Monster���������big_monster(���)
	big_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Monster(a, b, c, d) {   //���Գ�ʼ��
		setmoney(e);
	}
};


#endif
