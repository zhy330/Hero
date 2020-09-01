#pragma once

class system
{
public:
	system();
	~system();
	void storage_progress();
	void Read_progress();
	void End_progress();
	void coutinue_progress();
	void fighting();

private:
	Hero hero;
	Map map;
};

system::system()
{
}

system::~system()
{
}