#ifndef BIOBGICAL_H_INCLUDED
#define BIOBGICAL_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Biobgical {
public:
	Biobgical(double a = 0, double b = 0, double c = 0, string d = " ") {  //�������Գ�ʼ��
		Hp = a;
		TDF = b;
		ATK = c;
		name = d;
	};
	double getHp() { return Hp; };//�õ�����ֵ
	double getTDF(){ return TDF; };//�õ�������
	double getATK(){ return ATK; };//�õ�������
	string getname() { return name; };//�õ�����
private:
	double Hp;//����ֵ
	double TDF;//������
	double ATK;//������
	string  name;//����
};
#endif