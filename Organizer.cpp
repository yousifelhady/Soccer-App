#include "Organizer.h"

void Organizer::MakeSchedule(list<Team>& teams)
{
	int N;
	int count = teams.size();
	for (int i = 0; i < count ; i++)
	{
		N = rand() % teams.size();
		list<Team>::iterator it;
		it = next(teams.begin(), N);
		matches.push(*it);
		teams.erase(it);
		it = teams.begin();
	}
}
