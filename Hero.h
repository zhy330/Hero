#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include"Biobgical.h"
#include<iostream>
using namespace std;

class Hero:public Biobgical{   //Biobgical�����������Hero��Ӣ�ۣ�
public:
	Hero(double a = 0, double b = 0, double c = 0, string d = " "):Biobgical(a, b, c, d){       //���Գ�ʼ��
	}
	virtual void Information() = 0;
};


class tank :public Hero {        //Hero��Ӣ�ۣ�������tank��̹�ˣ�
public:
	tank(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {        //���Գ�ʼ��
	}
	void Information() {
		    cout << "\t\t\t\t" << "̹��" << endl;
			cout << "\t\t\t\t" << "������" <<getATK()<<"  ������"<<getTDF()<<"  ������"<<getHp()<< endl;
			cout << "\t\t\t\t" << "���Ʒ���װ" << endl;
	}
	void set() {
		cout << "11111111111111111111" << endl;
	}
};

class thud : public Hero {   //Hero��Ӣ�ۣ�������thud���̿ͣ�
public:
	thud(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {          //���Գ�ʼ��
	};
};

class soldier :public Hero {  //Hero��Ӣ�ۣ�������soldier��սʿ��
public:
	soldier(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {   //���Գ�ʼ��
	};

};
#endif
