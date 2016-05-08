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

};

