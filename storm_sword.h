#ifndef STORM_SWORD_H_INCLUDED
#define STORM_SWORD_H_INCLUDED
#include<iostream>
#include"equipment.h"
#include<string>
using namespace std;

class storm_sword :public equipment {
public:
	storm_sword(int a=1,string b=" "){
		grade = a;
		setname(b);
		change();
	};
	void Information(){
		cout<<"\t\t\t\t\t\****************************************************"<<endl;
		cout<<"\t\t\t\t\t\*              �籩�޽�(����װ)  "<<grade<<"��     *"<<endl;
		cout<<"\t\t\t\t\t\*        �ȼ� 1    ������1      �����ʣ�0          *"<<endl;
		cout<<"\t\t\t\t\t\*        �ȼ� 2    ������2      �����ʣ�0          *"<<endl;
		cout<<"\t\t\t\t\t\*        �ȼ� 3    ������4      �����ʣ�20%        *"<<endl;
		cout<<"\t\t\t\t\t\*        �ȼ� 4    ������6      �����ʣ�40%        *"<<endl;
		cout<<"\t\t\t\t\t\*        �ȼ� 5    ������10     �����ʣ�60%        *"<<endl;
		cout<<"\t\t\t\t\t\*                                                  *"<<endl;
		cout<<"\t\t\t\t\t\****************************************************"<<endl;
	}

	void change() {
		switch (grade)
	    {
		case 1:setequipment(1,0,0); break;
		case 2:setequipment(2,0,0); break;
		case 3:setequipment(4,0,0.2); break;
		case 4:setequipment(6,0,0.4); break;
		case 5:setequipment(10,0,0.6); break;
		default:cout << "���װ���ȼ����������޷��ٽ�������ǿ��" << endl;
		}
	};
private:
	int grade;//�ȼ�
};

#endif