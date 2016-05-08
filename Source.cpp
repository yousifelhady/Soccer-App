#include "Team.h"

int main () {
	Team t;
	vector<Player> v(11);
	string s;
	for (int i = 0; i < 11; i++)
	{
		s = to_string(i);
		v[i].SetName("p "+ s);
	}
	for (int i = 0; i < 11; i++)
	{
		cout << v[i].GetName() <<endl;
	}
	return 0;
}