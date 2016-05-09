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
	static void PrintResult(stack<Team> m,stack<int> r);


private:
	stack<Team> matches;
	stack<int> result;
	list<Team> loser;
	friend void TeamSchedulerDisplayer (Organizer o);

};

#endif