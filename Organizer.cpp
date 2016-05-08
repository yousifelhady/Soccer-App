#include "Organizer.h"

void Organizer::MakeSchedule(list<Team>& teams)
{
	int N;
	for (int i = 0; i < 16; i++)
	{
		N = rand() % teams.size();
		list<Team> ::iterator it;
		it = next(teams.begin(), N);
		matches.push(*it);
		teams.erase(it);
		it = teams.begin();
	}
	
}

