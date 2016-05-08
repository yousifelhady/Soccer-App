#include "Team.h"
#include <list>
#include "Organizer.h"

int main () {
	Organizer o;
	list<Team> t;
	Team arr[16];
	for (int i = 0; i < 16; i++)
	{
		arr[i].SetName("T" + to_string(i));
	}
	for (int i = 0; i < 16; i++)
	{
		t.push_back(arr[i]);
	}
	o.MakeSchedule(t);
	system("Pause");
}