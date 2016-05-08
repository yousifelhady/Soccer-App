#ifndef _player_
#define _player_
#include <iostream>
#include <string>
using namespace std;
class Player
{
public:
	Player();
	void SetName(string n);
	void SetNumOFGoals(int n);
	void SetNumber(int n);
	string GetName();
	int GetNumOfGoals();
	int GetNumber();

private:
	string Name;
	int NumOFGoals;
	int Number;
};
#endif