#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
class Team
{
public:
	Team();
	~Team();
	void SetName(string n);
	string GetName();
	void SetNumberOfGoals(int n);
	int GetNumberOfGoals();
	void SetPlayers(Player p[]);
	Player[] GetPlayers();


private:
	string Name;
	int NumberOfGoals;
	Player Players[18];
};
