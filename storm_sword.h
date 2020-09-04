#ifndef STORM_SWORD_H_INCLUDED
#define STORM_SWORD_H_INCLUDED
#include<iostream>
#include"equipment.h"
#include<string>
using namespace std;

class storm_sword :public equipment {
public:
	storm_sword(int a=1) {
		grade = a;
		change();
	};
	void Information(){
		cout<<"\t\t\t\t\t\****************************************************"<<endl;
		cout<<"\t\t\t\t\t\*              风暴巨剑(攻击装)                    *"<<endl;
		cout<<"\t\t\t\t\t\*                                                  *"<<endl;
		cout<<"\t\t\t\t\t\*                                                  *"<<endl;
		cout<<"\t\t\t\t\t\*                                                  *"<<endl;
		cout<<"\t\t\t\t\t\*                                                  *"<<endl;
		cout<<"\t\t\t\t\t\*                                                  *"<<endl;
		cout<<"\t\t\t\t\t\*                                                  *"<<endl;
		cout<<"\t\t\t\t\t\****************************************************"<<endl;
	}
	double getATK() { return ATK; };
	double getTDF() { return TDF; };
	double getCR()  { return CR; };
	void change() {
		switch (grade)
	    {
		case 1:ATK = 1, CR = 0; break;
		case 2:ATK = 2, CR = 0; break;
		case 3:ATK = 4, CR = 0.2; break;
		case 4:ATK = 6, CR = 0.4; break;
		case 5:ATK = 10, CR = 0.6; break;
		default:cout << "你的装备等级已满级，无法再进行属性强化" << endl;
		}
	};
private:
	double ATK;//攻击力
	double TDF;//防御力
	double CR;//暴击率
	int grade;//等级
};

#endif