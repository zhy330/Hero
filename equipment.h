#ifndef EQUIPMENT_H_INCLUDED
#define EQUIPMENT_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

class equipment {
public:
	void setname(string a) { name = a; };
	string getname() { return name; };
private:
	string name;
};
#endif