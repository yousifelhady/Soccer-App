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

private:
	stack<Team> matches;
	stack<int> result;
	friend void TeamSchedulerDisplayer (Organizer o);
};

#endif