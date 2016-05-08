#pragma once
#include "Team.h"
#include <list>
#include <stack>

class Organizer
{
public:
	void MakeSchedule(list<Team> &teams);

private:
	stack<Team> matches;
	friend void TeamSchedulerDisplayer (Organizer o);
	static void Results (Organizer o);

private:
	stack<Team> matches;
	stack<int> result;


};

