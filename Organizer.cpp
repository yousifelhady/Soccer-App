#include "Organizer.h"


void Organizer::MakeSchedule(list<Team> teams)
{
	int N;
	for (int i = 0; i < 16; i++)
	{
		N = rand() % 16;
		list<Team> ::iterator it;
		it = next(teams.begin(), N);
		cout << it->GetName();
	}
	
}
