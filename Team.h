#ifndef _T_
#define _T_
#include "player.h"
#include <vector>

class Team
{
public:
	Team();
	~Team();
	void SetName(string n);
	string GetName();
	void SetNumberOfGoals(int n);
	int GetNumberOfGoals();
	void SetPlayers(vector<Player> p);
	vector<Player> GetPlayers();


private:
	string Name;
	int NumberOfGoals;
	vector<Player> Players;
};
#endif