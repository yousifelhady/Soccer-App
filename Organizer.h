#pragma once
#include "Team.h"
#include <list>
#include <stack>

class Organizer
{
public:
	void MakeSchedule(list<Team> &teams);
	static void Results (Organizer o);

private:
	stack<Team> matches;
	stack<int> result;


};

