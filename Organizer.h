#ifndef p
#define p
#include "Team.h"
#include <list>
#include <stack>
#include <iostream>
class Organizer
{
public:
	void MakeSchedule(list<Team> &teams);
	static void Results (Organizer o);
	void Qualify();
	void PrintResult(stack<Team> m,stack<int> r); //leeh static??
	void SetAllTeams(list<Team> t);
	list<Team> GetAllTeams();
	void SetMatchGoals(Team &t, int goals);
private:
	stack<Team> matches;
	stack<int> result;
	list<Team> AllTeams;
	friend void TeamSchedulerDisplayer (Organizer o);
};

#endif