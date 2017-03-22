#ifndef _T_
#define _T_
#include "player.h"
#include <vector>
#include <list>

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
	void DisplayTeamInfo ();
	static Team Search(string name, list<Team>& team);

private:
	string Name;
	int NumberOfGoals;
	vector<Player> Players;
};
#endif