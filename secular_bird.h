#ifndef SECULAR_BIRD_H_INCLUDED
#define SECULAR_BIRD_H_INCLUDED
#include<iostream>
#include"equipment.h"
#include"Hero.h"
#include<string>
using namespace std; 

class secular_bird:public equipment {
public:
	secular_bird(int a,string b) {
		grade = a;
		setname(b);
	}
	void setHp(Hero *hero) { Hp = hero->getHp();}	

	void change() {
		switch (grade)
		{
		case 1:setequipment(0, 1, 0); break;
		case 2:setequipment(0, 2, 0); break;
		case 3:setequipment(Hp*0.02, 4, 0); break;
		case 4:setequipment(0, 6+Hp*0.03, 0); break;
		case 5:setequipment(Hp*0.04, 10+Hp*0.04, 0); break;
		default:cout << "���װ���ȼ����������޷��ٽ�������ǿ��" << endl;
		}

	}
	void Information() {
		cout << "\t\t\t\t\t\********************************************************" << endl;
		cout << "\t\t\t\t\t\*             ��������װ(����װ)  "<<grade<<"��        *" << endl;
		cout << "\t\t\t\t\t\*   �ȼ� 1    ������1                ���ˣ�0           *" << endl;
		cout << "\t\t\t\t\t\*   �ȼ� 2    ������2                ���ˣ�0           *" << endl;
		cout << "\t\t\t\t\t\*   �ȼ� 3    ������4                ���ˣ��������*2% *" << endl;
		cout << "\t\t\t\t\t\*   �ȼ� 4    ������6+�������*3%    ���ˣ�0           *" << endl;
		cout << "\t\t\t\t\t\*   �ȼ� 5    ������10+�������*4%   ���ˣ��������*4% *" << endl;
		cout << "\t\t\t\t\t\*                                                      *" << endl;
		cout << "\t\t\t\t\t\********************************************************" << endl;
	}

private:
	double ATK = 0;//������
	double TDF = 0;//������
	double CR = 0;//������
	int grade;//�ȼ�
	double Hp=0;   //����ð��Ӣ�۵�Ѫ��ֵ
};


#endif